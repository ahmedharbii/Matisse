﻿#include "init_2d_mosaic.h"
#include "nav_image.h"

#include "mosaic_descriptor.h"

#include "Polygon.h"

#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
Q_EXPORT_PLUGIN2(Init2DMosaic, Init2DMosaic)
#endif

using namespace nav_tools;
using namespace optical_mapping;

namespace matisse {

Init2DMosaic::Init2DMosaic() :
    Processor(NULL, "Init2DMosaic", "Init 2D mosaic Descriptor with navigation", 1, 1)
{

    addExpectedParameter("cam_param",  "K");
    addExpectedParameter("algo_param", "scale_factor");
    addExpectedParameter("cam_param",  "V_Pose_C");

    addExpectedParameter("algo_param","filter_overlap");
    addExpectedParameter("algo_param","min_overlap");
    addExpectedParameter("algo_param","max_overlap");
    addExpectedParameter("algo_param", "disjoint_drawing");

}

Init2DMosaic::~Init2DMosaic(){

}

bool Init2DMosaic::configure()
{
    return true;
}

void Init2DMosaic::onNewImage(quint32 port, Image &image)
{
    qDebug() << logPrefix() << "Receive image on port " << port;
    qDebug() << logPrefix() << "Process InitMatchModule";

    // Forward image
    postImage(0, image);

}

bool Init2DMosaic::start()
{
    setOkStatus();

    return true;
}

bool Init2DMosaic::stop()
{
    return true;
}

void Init2DMosaic::onFlush(quint32 port)
{
    qDebug() << logPrefix() << "flush port " << port;

    emit si_processCompletion(0);
    emit si_userInformation("Initializing 2D Mosaic...");

    MosaicDescriptor *pMosaicD = new MosaicDescriptor;
    QVector<ProjectiveCamera*> *pCams = new QVector<ProjectiveCamera*>;
    ImageSet * imageSet;

    // Find imageSet corresponding to this port
    foreach (ImageSetPort *ImSet,*m_input_port_list){
        if (ImSet->port_number == port){
            imageSet = ImSet->image_set;
            break;
        }
    }

    emit si_processCompletion(10);

    // Get camera matrix
    bool Ok;
    QMatrix3x3 qK = m_matisse_parameters->getMatrix3x3ParamValue("cam_param",  "K",  Ok);
    cv::Mat K(3,3,CV_64F);
    if (Ok){
        qDebug() << "K Ok =" << Ok;

        for (int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                K.at<double>(i,j) = qK(i,j);
            }
        }

    }else{
        qDebug() << "K Ok =" << Ok;
        exit(1);
    }

    std::cerr <<"K = " << K;

    emit si_processCompletion(30);

    double scaleFactor = m_matisse_parameters->getDoubleParamValue("algo_param", "scale_factor", Ok);

    if (!Ok){
        qDebug() << "scale factor not provided Ok \n";
        exit(1);
    }

    // Get camera lever arm
    cv::Mat V_T_C(3,1,CV_64F), V_R_C(3,3,CV_64F);

    Matrix6x1 V_Pose_C = m_matisse_parameters->getMatrix6x1ParamValue("cam_param",  "V_Pose_C",  Ok);
    if (Ok){

        for (int i=0; i<3; i++){
            V_T_C.at<double>(i,0) = V_Pose_C(0,i);
        }

        GeoTransform T;

        V_R_C = T.rotZ(V_Pose_C(0,5))*T.rotY(V_Pose_C(0,4))*T.rotX(V_Pose_C(0,3));

    }

    emit si_processCompletion(60);

    if (imageSet){

        // Create cameras
        QList<Image *> imageList = imageSet->getAllImages();
        foreach (Image* image, imageList) {

            NavImage *navImage = dynamic_cast<NavImage*>(image);
            if (navImage) {
                if (navImage->navInfo().altitude()>0.0)
                {
                    pCams->push_back(new ProjectiveCamera(navImage, K, V_T_C, V_R_C, (double)scaleFactor));
                }
            }else{
                qDebug() << "cannot cast as navImage \n";
                exit(1);
            }
        }

        // Init cameras
        pMosaicD->initCamerasAndFrames(*pCams,true);
        qDebug() << "Init done";

        // Filter cameras on overlap
        if (m_matisse_parameters->getBoolParamValue("algo_param", "disjoint_drawing", Ok)) {
            pMosaicD->computeMosaicExtentAndShiftFrames();
            pMosaicD->decimateImagesUntilNoOverlap();
        }
        else if ( m_matisse_parameters->getBoolParamValue("algo_param","filter_overlap", Ok) ){
            double min_overlap = m_matisse_parameters->getDoubleParamValue("algo_param","min_overlap", Ok);
            double max_overlap = m_matisse_parameters->getDoubleParamValue("algo_param","max_overlap", Ok);

            pMosaicD->computeMosaicExtentAndShiftFrames();
            pMosaicD->decimateImagesFromOverlap(min_overlap, max_overlap);
        }

        // Compute extents
        pMosaicD->computeMosaicExtentAndShiftFrames();
        qDebug() << "Extent computation done";

    }

    emit si_processCompletion(90);

    // Add pCams to mosaic _context
    QVariant * pCamsStocker = new QVariant();
    pCamsStocker->setValue(pCams);
    m_context->addObject("Cameras", pCamsStocker);

    // Add pMosaicD to mosaic _context
    QVariant * pMosaicDStocker = new QVariant();
    pMosaicDStocker->setValue(pMosaicD);
    m_context->addObject("MosaicDescriptor", pMosaicDStocker);

    emit si_processCompletion(100);


    // Flush next module port
    flush(0);

}

} // namespace matisse

