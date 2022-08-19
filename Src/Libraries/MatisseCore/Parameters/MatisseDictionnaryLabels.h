#ifndef MATISSEDICTIONNARYLABELS_H
#define MATISSEDICTIONNARYLABELS_H

#include <QObject>
#include <QString>
#include <QMap>
#include <QtDebug>

/*
 * Header file generated by MatisseDictionnaryValidator tool on 03/03/2019 19:11:57
 * This header allows internationalization of the dictionary labels (parameters and groups)
 *
 * Use lupdate (Qt Linguist) to udapte MatisseTools translation files
 *
 * DO NOT EDIT THIS FILE !
 */

namespace matisse
{

class MatisseDictionnaryLabels : public QObject
{
	Q_OBJECT

public:
	
	QMap<QString, QString> _paramLabelKeys;
	QMap<QString, QString> _groupLabelKeys;

	void declareLabels()
	{
		qDebug() << "Declaring parameters and groups labels for internationalization...";
		
		
		/*
		 * STRUCTURE : algo_param
		 */

		/* GROUP : general_algo_params */
		_paramLabelKeys.insert("general_algo_params", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "General algorithm params"));
		_paramLabelKeys.insert("sift_code", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Sift algorithm"));
		_paramLabelKeys.insert("scale_factor", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Image scaling factor"));
		_paramLabelKeys.insert("maxdist_centers", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Research dist (m)"));
		_paramLabelKeys.insert("min_matches", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Minimum matches"));
		_paramLabelKeys.insert("max_matches", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Maximum matches"));
		_paramLabelKeys.insert("First_processed_image", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "First image index"));
		_paramLabelKeys.insert("Last_processed_image", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Last image index"));
		_paramLabelKeys.insert("step_im", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Images step"));
		_paramLabelKeys.insert("force_recompute", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Force recompute"));

		/* GROUP : overlap_filtering_params */
		_groupLabelKeys.insert("overlap_filtering_params", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Images overlap handling"));
		_paramLabelKeys.insert("filter_overlap", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Overlap filtering"));
		_paramLabelKeys.insert("max_overlap", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Max overlap between 2 images"));
		_paramLabelKeys.insert("min_overlap", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Min overlap between 2 images"));
		_paramLabelKeys.insert("do_realtime_mosaicking", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Activate realtime mosaicking"));
		_paramLabelKeys.insert("do_realtime_mosaicking", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Activate the use of GPU acceleration with OpenCL"));

		/* GROUP : bundle_adjustment_params */
		_groupLabelKeys.insert("bundle_adjustment_params", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Bundle adjustment"));
		_paramLabelKeys.insert("MaxIter", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Max iterations in optimization"));
		_paramLabelKeys.insert("max_Roll", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Max roll"));
		_paramLabelKeys.insert("max_Pitch", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Max pitch"));
		_paramLabelKeys.insert("ba_method", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Mosaicking method"));
		_paramLabelKeys.insert("cosmetic_stretch", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Color correction"));

		/* GROUP : blending_displaying_params */
		_groupLabelKeys.insert("blending_displaying_params", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Blending and display parameters"));
		_paramLabelKeys.insert("expo_comp_method", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Exposition comp. method"));
		_paramLabelKeys.insert("seam_method", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Seaming algorithm"));
		_paramLabelKeys.insert("blending_method", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Blending algorithm"));
		_paramLabelKeys.insert("no_plot", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "No plot (just progression bar)"));
		_paramLabelKeys.insert("WriteGeoTiff", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Write GeoTiff"));
		_paramLabelKeys.insert("block_drawing", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Block drawing (better mem management)"));
		_paramLabelKeys.insert("block_width", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Mean block width"));
		_paramLabelKeys.insert("block_height", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Mean block height"));

		/* GROUP : compute_feature */
		_groupLabelKeys.insert("compute_feature", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Compute Features"));
		_paramLabelKeys.insert("describer_method", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Feature algorithm"));
		_paramLabelKeys.insert("describer_preset", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Feature preset"));

		/* GROUP : compute_matches */
		_groupLabelKeys.insert("compute_matches", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Compute Matches"));
		_paramLabelKeys.insert("nearest_matching_method", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Matching algorithm"));
		_paramLabelKeys.insert("video_mode_matching", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Transect Matching Im Nb"));
		_paramLabelKeys.insert("video_mode_matching_enable", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Transect Mode"));
		_paramLabelKeys.insert("nav_based_matching_enable", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Nav based matching"));
		_paramLabelKeys.insert("nav_based_matching_max_dist", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Nav matching max dist"));
		_paramLabelKeys.insert("guided_matching", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Apply Guided Matching based on 2-views Geometry"));

		/* GROUP : DensifyPointCloud */
		_groupLabelKeys.insert("DensifyPointCloud", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Densify Point Cloud"));
		_paramLabelKeys.insert("resolution_level", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Resolution level divider"));
		_paramLabelKeys.insert("number_views_fuse", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Number Views Fuse"));

		/* GROUP : ReconstructMesh */
		_groupLabelKeys.insert("ReconstructMesh", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Reconstruct Mesh"));
		_paramLabelKeys.insert("decimate_factor", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Decimation Factor"));

		/* GROUP : TexReCon */
		_groupLabelKeys.insert("TexReCon", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Texture Mesh"));
		_paramLabelKeys.insert("keep_unseen_faces", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Keep Unseen Faces"));

		/*
		 * STRUCTURE : vehic_param
		 */

		/* GROUP : vehicle_params */
		_paramLabelKeys.insert("vehicle_params", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Vehicle related parameters"));
		_paramLabelKeys.insert("reproj_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Retroprojection std (in px)"));
		_paramLabelKeys.insert("X_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "X axis std (m)"));
		_paramLabelKeys.insert("Y_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Y axis std (m)"));
		_paramLabelKeys.insert("alt_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Altitude std (m)"));
		_paramLabelKeys.insert("depth_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "depth std (m)"));
		_paramLabelKeys.insert("Roll_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "roll std (rad)"));
		_paramLabelKeys.insert("Pitch_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "pitch std (rad)"));
		_paramLabelKeys.insert("Yaw_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "heading std (rad)"));

		/*
		 * STRUCTURE : cam_param
		 */

		/* GROUP : advanced_camera_params */
		_groupLabelKeys.insert("advanced_camera_params", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Camera parameters"));
		_paramLabelKeys.insert("K", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Camera calibration matrix"));
		_paramLabelKeys.insert("V_Pose_C", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Cam/IMU rel. position"));
		_paramLabelKeys.insert("still_camera_port", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Still camera TCP port"));
		_paramLabelKeys.insert("still_camera_address", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Still camera address"));
		_paramLabelKeys.insert("sensor_width", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Full sensor width (px)"));
		_paramLabelKeys.insert("sensor_height", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Full sensor height (pixels)"));
		_paramLabelKeys.insert("camera_preset", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Camera preset"));
        _paramLabelKeys.insert("camera_equipment", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Camera equipment"));

		/*
		 * STRUCTURE : video_input_param
		 */

		/* GROUP : video_input_params */
		_paramLabelKeys.insert("idCamera", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "N. Camera"));
		_paramLabelKeys.insert("intervalCapture", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Capture reccurence (ms)"));

		/*
		 * STRUCTURE : dim2_param
		 */

		/* GROUP : network_nav_input_params */
		_paramLabelKeys.insert("udp_port", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Udp dim2 port"));

		/*
		 * STRUCTURE : dataset_param
		 */

		/* GROUP : output_and_geo_params */
		_paramLabelKeys.insert("output_and_geo_params", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Data related params"));
		_paramLabelKeys.insert("dataset_dir", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Data path"));
		_paramLabelKeys.insert("output_dir", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Output path"));
		_paramLabelKeys.insert("output_filename", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Output name prefix"));
		_paramLabelKeys.insert("navFile", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Navigation file"));
		_paramLabelKeys.insert("navSource", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Navigation source"));
		_paramLabelKeys.insert("usePrior", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Use navigation prior"));
		_paramLabelKeys.insert("utm_zone", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Zone UTM"));
		_paramLabelKeys.insert("utm_hemisphere", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Hemisphere UTM"));

	}
	
	QString getParamLabel(QString paramName) {
		if (!_paramLabelKeys.contains(paramName)) {
			qCritical() << QString("No label declared for parameter '%1'").arg(paramName);
			return paramName;
		}
		
		QString labelKey = _paramLabelKeys.value(paramName);
		QString translation = tr(labelKey.toLatin1());
		return translation;
	}
	
	QString getGroupLabel(QString groupName) {
		if (!_groupLabelKeys.contains(groupName)) {
			qDebug() << QString("No label declared for group '%1'").arg(groupName);
			return groupName;
		}
	
		QString labelKey = _groupLabelKeys.value(groupName);
		QString translation = tr(labelKey.toLatin1());
		return translation;
	}

};

}

#endif // MATISSEDICTIONNARYLABELS_H
