﻿#include "Module2.h"
#include "MosaicContext.h"
#include "NavImage.h"
#include "FileImage.h"
//#include "Sleeper.h"
#include <QThread>
#include "MosaicDescriptor.h"

// Exportation de la classe Module2 dans la bibliotheque de plugin TestModule2
#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
Q_EXPORT_PLUGIN2(Module2, Module2)
#endif

Module2::Module2() :
    Processor(NULL, "Module2", "Module d'essai", 2, 1)
{
    addExpectedParameter("algo_param", "scale_factor");
    addExpectedParameter("algo_param", "maxdist_centers");
    addExpectedParameter("algo_param", "min_matches");
    addExpectedParameter("algo_param", "filter_overlap");
    addExpectedParameter("algo_param", "max_overlap");
    addExpectedParameter("algo_param", "min_overlap");
    addExpectedParameter("algo_param", "max_Roll");
    addExpectedParameter("algo_param", "max_Pitch");

    qDebug()<< logPrefix() << " crée!";
}

bool Module2::configure()
{
    return true;
}

void Module2::onNewImage(quint32 port, Image &image)
{
    qDebug() << logPrefix() << "Receive image on port " << port;
    qDebug() << logPrefix() << "Process Module2";
    image.imageData();
    Image* toDisplay = new Image(image, false);
    emit signal_showImageOnMainView(toDisplay);
    image.releaseImageData();

}

bool Module2::start()
{
    setOkStatus();

    qDebug() << logPrefix() << "Enter start";
    QVariant *object = _context->getObject("MosaicData");
    if (object) {
        MosaicData * pm = object->value<MosaicData*>();
        qDebug()<< logPrefix() << "Receive this value: " << pm->init.filename;
    }
    qDebug() << logPrefix() << "Exit start";
    return true;
}

bool Module2::stop()
{
    qDebug() << logPrefix() << "Inside stop";
    return true;
}

void Module2::onFlush(quint32 port)
{
    qDebug() << logPrefix() << "flush port " << port;
    qDebug() << logPrefix() << "BLEND" ;


    foreach (ImageSetPort *imageSetPort, *_inputPortList ) {
        if (imageSetPort->portNumber == port) {
            ImageSet *imgSet = imageSetPort->imageSet;
            QList<Image*> images = imgSet->getAllImages();
            qDebug() << logPrefix() << "Processing all images" ;
            foreach (Image *image, images) {
                if (!isStarted())
                    break;

                QThread::sleep(1); //Sleeper::sleep(1);

            }
            break;
        }
    }

}



