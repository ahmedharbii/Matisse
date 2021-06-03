﻿#ifndef MATISSE_FLUSHER_H_
#define MATISSE_FLUSHER_H_


#include "input_data_provider.h"
#include "dim2_file_reader.h"
#include "picture_file_set.h"
#include "image_set.h"
#include "file_image.h"

namespace matisse {

class Flusher : public InputDataProvider
{
    Q_OBJECT
    Q_INTERFACES(matisse::InputDataProvider)

#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
    Q_PLUGIN_METADATA(IID "Flusher")
#endif
public:
    explicit Flusher(QObject *parent = 0);
    virtual ~Flusher();

    virtual ImageSet * imageSet(quint16 port);
    virtual bool configure();
    virtual bool start();
    virtual bool stop();


private:
    PictureFileSet * _pictureFileSet;
    nav_tools::Dim2FileReader *_dim2FileReader;
    ImageSet * _imageSet;

signals:
    
public slots:
    
};

} // namespace matisse

#endif // MATISSE_FLUSHER_H_
