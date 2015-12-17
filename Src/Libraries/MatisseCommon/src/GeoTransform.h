#ifndef GEOTRANSFORM_H
#define GEOTRANSFORM_H

#include <QtGlobal>
#include <QDateTime>
#include <QByteArray>
#include <QStringList>
#include <opencv2/opencv.hpp>

namespace MatisseCommon {

///
/// \brief The GeoTransform class is based on the Proj4, OpenCV and Qt libraries and provide geographic & geometric operations
///
class GeoTransform
{
public:
    GeoTransform();

    ///
    /// \brief LatLongToUTM Convert latitude and longitude to UTM
    /// \param lat_p : latitude
    /// \param lon_p : longitude
    /// \param x_p : utm easting
    /// \param y_p : utm northing
    /// \param utmZone_p : zone utm (output if forceZone==false, input and taken as the utm zone otherwise) format ex : "30 N"
    /// \param forceZone
    /// \return true on success, false on fail
    ///
    bool LatLongToUTM(qreal lat_p, qreal lon_p, qreal & x_p, qreal & y_p, QString & utmZone_p, bool forceZone = false);

    ///
    /// \brief UTMToLatLong
    /// \param x_p : utm easting
    /// \param y_p : utm northing
    /// \param utmZone_p : zone utm, format ex : "30 N"
    /// \param lat_p : latitude
    /// \param lon_p : longitude
    /// \return true on success, false on fail
    ///
    bool UTMToLatLong(qreal x_p, qreal y_p, QString utmZone_p, qreal &lat_p, qreal &lon_p);

    ///
    /// \brief RotX construct a rotation matrix of angle "a" around x axis
    /// \param a : rotation angle in rad
    /// \return the rotation matrix
    ///
    cv::Mat RotX( qreal a );

    ///
    /// \brief RotY construct a rotation matrix of angle "a" around y axis
    /// \param a : rotation angle in rad
    /// \return the rotation matrix
    ///
    cv::Mat RotY( qreal a );

    ///
    /// \brief RotZ construct a rotation matrix of angle "a" around z axis
    /// \param a : rotation angle in rad
    /// \return the rotation matrix
    ///
    cv::Mat RotZ( qreal a );
};

}

#endif // GEOTRANSFORM_H