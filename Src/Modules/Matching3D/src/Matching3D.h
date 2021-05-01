﻿#ifndef InitMatchModule_H
#define InitMatchModule_H


#include "Processor.h"
#include "third_party/progress/progress.hpp"

enum EGeometricModel
{
    FUNDAMENTAL_MATRIX = 0,
    ESSENTIAL_MATRIX = 1,
    HOMOGRAPHY_MATRIX = 2,
    ESSENTIAL_MATRIX_ANGULAR = 3,
    ESSENTIAL_MATRIX_ORTHO = 4,
    ESSENTIAL_MATRIX_UPRIGHT = 5
};

enum EPairMode
{
    PAIR_EXHAUSTIVE = 0,
    PAIR_CONTIGUOUS = 1,
    PAIR_FROM_FILE = 2
};

//using namespace MatisseCommon;

/**
 * Module1
 * @brief  Exemple de module pour implementer un algorithme de traitement dans Matisse
 */
class Matching3D : public MatisseCommon::Processor, public C_Progress
{
    Q_OBJECT
    Q_INTERFACES(MatisseCommon::Processor)

#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
    Q_PLUGIN_METADATA(IID "Matching3D")
#endif

public:
    Matching3D();
    ~Matching3D();
    virtual bool configure();
    virtual bool start();
    virtual bool stop();
    virtual void onFlush(quint32 port);
    virtual void onNewImage(quint32 port, MatisseCommon::Image &image);

    /** @brief Initializer of the C_Progress class
* @param expected_count The number of step of the process
* @param msg updates the status string. Can be empty to keep the last one.
**/
    void restart(unsigned long ulExpected_count, const std::string& msg = std::string()) override
        //  Effects: display appropriate scale
        //  Postconditions: count()==0, expected_count()==expected_count
    {
        C_Progress::restart(ulExpected_count, msg); //-- Initialize the base class
        if (!msg.empty())
        {
            QString qmsg = "Matching :" + QString::fromStdString(msg).remove('\n').remove('-');
            emit signal_userInformation(qmsg);
        }

    } // restart

private:
    bool computeFeatures();
    bool computeMatches(EGeometricModel eGeometricModelToCompute = FUNDAMENTAL_MATRIX);

    /** @brief Function that ... **/
    void inc_tic() override
    {
        emit signal_processCompletion((int)(_count / (float)_expected_count * 100 + .5));
    } // display_tic
};

#endif // InitMatchModule_H
