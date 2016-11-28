
QT       += core xml

TARGET = DrawBlend2DMosaic
CONFIG += plugin

TEMPLATE = lib


win32 {
    QMAKE_CXXFLAGS += /wd4100 /wd4996

}

QMAKE_CXXFLAGS += -std=c++11

# Workaround to be removed in qt5 with qmake.conf and shadowed function --
SOURCE_DIR=$$PWD/../../
CONFIG(debug, debug|release) {
    BUILD_DIR=$${SOURCE_DIR}../Build/Debug
}
CONFIG(release, debug|release) {
    BUILD_DIR=$${SOURCE_DIR}../Build/Release
}
# ------------------------------------------------------------------------

include(../../Scripts/MatisseCommon.pri)
include(../../Scripts/BasicProcessing.pri)
include(../../Scripts/OpticalMapping.pri)
include(../../Scripts/opencv.pri)
include(../../Scripts/qgis.pri)

win32 {
    DLLDESTDIR = $${BUILD_DIR}/Modules/rasterProviders
}
unix {
    DESTDIR = $${BUILD_DIR}/Modules/rasterProviders
}

SOURCES += src/DrawBlend2DMosaic.cpp

HEADERS += src/DrawBlend2DMosaic.h
