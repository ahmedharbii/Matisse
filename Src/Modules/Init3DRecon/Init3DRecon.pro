
QT       += core xml widgets

TARGET = Init3DRecon
CONFIG += plugin

TEMPLATE = lib


#win32 {
#    QMAKE_CXXFLAGS += /wd4100 /wd4996 /std:c++14
#    DEFINES += _USE_MATH_DEFINES
#}
#unix {
QMAKE_CXXFLAGS += -std=c++11
#}

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
#include(../../Scripts/qgis.pri)

win32 {
}
# temp ------------------------------------------------

#QMAKE_CXXFLAGS += -std=c++11
#QMAKE_CXXFLAGS+= -fopenmp -ffast-math
#QMAKE_LFLAGS +=  -fopenmp


#INCLUDEPATH += /usr/local/include
#INCLUDEPATH += /usr/include/x86_64-linux-gnu
#INCLUDEPATH += /usr/local/include/openMVG/third_party
#INCLUDEPATH += /usr/local/include/openMVG_dependencies
#INCLUDEPATH += /usr/local/include/openMVG_dependencies/cereal/include
#INCLUDEPATH += /usr/local/include/openMVG/third_party/lemon
#INCLUDEPATH += /home/data/ThirdPartyLibs/openMVG_Build/openMVG/third_party/lemon
#INCLUDEPATH += /usr/local/include/openMVG/third_party/eigen
#INCLUDEPATH += /usr/local/include/openMVG/third_party/ceres/include
#INCLUDEPATH += /usr/local/include/openMVG/third_party/ceres/miniglog
#INCLUDEPATH += /home/data/ThirdPartyLibs/openMVG_Build/openMVG/third_party/ceres/config
#INCLUDEPATH += /usr/local/include/openMVG/third_party/flann/src/cpp
#INCLUDEPATH += /usr/local/include/openMVG_dependencies/osi_clp/CoinUtils/src
#INCLUDEPATH += /usr/local/include/openMVG_dependencies/osi_clp/Clp/src
#INCLUDEPATH += /usr/local/include/openMVG_dependencies/osi_clp/Clp/src/OsiClp
#INCLUDEPATH += /usr/local/include/openMVG_dependencies/osi_clp/Osi/src/Osi
#INCLUDEPATH += /usr/local/include/openMVG


#LIBS+= -L/usr/local/lib /usr/local/lib/libopenMVG_image.so /usr/local/lib/libopenMVG_features.so /usr/local/lib/libopenMVG_matching_image_collection.so /usr/local/lib/libopenMVG_kvld.so /usr/local/lib/libopenMVG_multiview.so /usr/local/lib/libopenMVG_lInftyComputerVision.so /usr/local/lib/libopenMVG_system.so /usr/local/lib/libopenMVG_sfm.so -lpng -lz -ljpeg -ltiff /usr/local/lib/libopenMVG_multiview.so /usr/local/lib/libopenMVG_numeric.so /usr/local/lib/liblemon.a /usr/local/lib/libopenMVG_lInftyComputerVision.so /usr/local/lib/liblib_clp.a /usr/local/lib/liblib_OsiClpSolver.a /usr/local/lib/liblib_CoinUtils.a /usr/local/lib/liblib_Osi.a /usr/local/lib/libopenMVG_system.so /usr/local/lib/libopenMVG_matching.so /usr/local/lib/libopenMVG_features.so /usr/local/lib/libfast.a /usr/local/lib/libceres.a -lgomp -lpthread /usr/local/lib/libcxsparse.a -lm /usr/local/lib/libstlplus.a /usr/local/lib/libeasyexif.a

#unix {
QMAKE_CXXFLAGS += -std=c++11
QMAKE_CXXFLAGS+= -fopenmp -ffast-math
QMAKE_LFLAGS +=  -fopenmp
##QMAKE_CXXFLAGS+= -rdynamic
#}

#unix {
#INCLUDEPATH += /usr/local/include/openMVG/third_party
#INCLUDEPATH += /usr/local/include/openMVG_dependencies
#INCLUDEPATH += /usr/local/include/openMVG_dependencies/cereal/include
#INCLUDEPATH += /usr/local/include/openMVG/third_party/lemon
#INCLUDEPATH += /home/data/ThirdPartyLibs/openMVG_Build/openMVG/third_party/lemon
#INCLUDEPATH += /usr/local/include/openMVG/third_party/eigen
#INCLUDEPATH += /usr/local/include/openMVG/third_party/ceres/include
#INCLUDEPATH += /usr/local/include/openMVG/third_party/ceres/miniglog
#INCLUDEPATH += /home/data/ThirdPartyLibs/openMVG_Build/openMVG/third_party/ceres/config
#INCLUDEPATH += /usr/local/include/openMVG/third_party/flann/src/cpp
#INCLUDEPATH += /usr/local/include/openMVG_dependencies/osi_clp/CoinUtils/src
#INCLUDEPATH += /usr/local/include/openMVG_dependencies/osi_clp/Clp/src
#INCLUDEPATH += /usr/local/include/openMVG_dependencies/osi_clp/Clp/src/OsiClp
#INCLUDEPATH += /usr/local/include/openMVG_dependencies/osi_clp/Osi/src/Osi
#INCLUDEPATH += /usr/local/include/openMVG

#LIBS+= -L/usr/local/lib /usr/local/lib/libopenMVG_image.so /usr/local/lib/libopenMVG_features.so /usr/local/lib/libopenMVG_matching_image_collection.so /usr/local/lib/libopenMVG_kvld.so /usr/local/lib/libopenMVG_multiview.so /usr/local/lib/libopenMVG_lInftyComputerVision.so /usr/local/lib/libopenMVG_system.so /usr/local/lib/libopenMVG_sfm.so -lpng -lz -ljpeg -ltiff /usr/local/lib/libopenMVG_multiview.so /usr/local/lib/libopenMVG_numeric.so /usr/local/lib/liblemon.a /usr/local/lib/libopenMVG_lInftyComputerVision.so /usr/local/lib/liblib_clp.a /usr/local/lib/liblib_OsiClpSolver.a /usr/local/lib/liblib_CoinUtils.a /usr/local/lib/liblib_Osi.a /usr/local/lib/libopenMVG_system.so /usr/local/lib/libopenMVG_matching.so /usr/local/lib/libopenMVG_features.so /usr/local/lib/libfast.a /usr/local/lib/libceres.a -llapack -lf77blas -latlas -lf77blas -latlas -lgomp -lpthread /usr/local/lib/libcxsparse.a -lm /usr/local/lib/libstlplus.a /usr/local/lib/libeasyexif.a
#}

# DEFINITELY NOT working under MinGW64
#INCLUDEPATH += /usr/local/include

INCLUDEPATH += "F:/msys64ins/usr/local/include"
INCLUDEPATH += "F:/msys64ins/usr/local/include/OpenMVG"
INCLUDEPATH += "F:/msys64ins/usr/local/include/OpenMVG/third_party/eigen"

message("Init3DRecon...")
message($${INCLUDEPATH}))
message("...Init3DRecon")

LIBS+= -LF:/msys64ins/usr/local/lib
LIBS *= -lopenMVG_image -lopenMVG_sfm  -lopenMVG_multiview -leasyexif -lstlplus -ljpeg -lpng -ltiff

#win32 {
#INCLUDEPATH += F:\ThirdPartyLibs\openMVG\src
#INCLUDEPATH += F:\ThirdPartyLibs\vcglib\eigenlib
#}

# temp ------------------------------------------------

win32 {
    DLLDESTDIR = $${BUILD_DIR}/Modules/processors
}
unix {
    DESTDIR = $${BUILD_DIR}/Modules/processors
}

SOURCES += src/Init3DRecon.cpp
#win32 {
#CONFIG(debug, debug|release) {
#    LIBS += -LF:\ThirdPartyLibs\openMVG_win\Windows-AMD64-Release\Debug
#}
#CONFIG(release, debug|release) {
#    LIBS += -LF:\ThirdPartyLibs\openMVG_win\Windows-AMD64-Release\RelWithDebInfo
#}
#    LIBS += -llibpng16 -llibtiff_i -ljpeg
#    LIBS += -leasyexif -lopenMVG_image -lopenMVG_features -lopenMVG_matching_image_collection -lopenMVG_kvld -lopenMVG_sfm -lopenMVG_multiview -lstlplus
#}

HEADERS += src/Init3DRecon.h