﻿#ifndef MODULE1_H
#define MODULE1_H

#include <QList>
#include <QVariant>
#include <QtDebug>


#include "Processor.h"

using namespace MatisseCommon;

/**
 * Module1
 * @brief  Exemple de module pour implementer un algorithme de traitement dans Matisse
 */
class Module1 : public Processor
{
    Q_OBJECT
    Q_INTERFACES(MatisseCommon::Processor)

public:
    Module1();
    virtual bool configure();
    virtual bool start();
    virtual bool stop();
    virtual void onFlush(quint32 port);
    virtual void onNewImage(quint32 port, Image &image);
};

#endif // MODULE1_H