#ifndef MATISSEDICTIONNARYLABELS_H
#define MATISSEDICTIONNARYLABELS_H

#include <QObject>
#include <QString>
#include <QMap>
#include <QtDebug>

/*
 * Header file generated by MatisseDictionnaryValidator tool on 31/03/2016 16:00:53
 * This header allows internationalization of the dictionary labels (parameters and groups)
 *
 * Use lupdate (Qt Linguist) to udapte MatisseTools translation files
 *
 * DO NOT EDIT THIS FILE !
 */

namespace MatisseTools
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
		_paramLabelKeys.insert("sift_code", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Code a executer pour le sift"));
		_paramLabelKeys.insert("scale_factor", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Reduction de la taille de l'image"));
		_paramLabelKeys.insert("maxdist_centers", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Distance max de recherche"));
		_paramLabelKeys.insert("min_matches", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Nombre min de correspondances"));
		_paramLabelKeys.insert("max_matches", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Nombre max de correspondances"));
		_paramLabelKeys.insert("First_processed_image", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Index premiere image"));
		_paramLabelKeys.insert("Last_processed_image", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Index derniere image"));
		_paramLabelKeys.insert("step_im", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Saut inter-images"));

		/* GROUP : overlap_filtering_params */
		_groupLabelKeys.insert("overlap_filtering_params", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Parametres de filtrage"));
		_paramLabelKeys.insert("filter_overlap", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Flag de filtrage"));
		_paramLabelKeys.insert("max_overlap", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Overlap max entre 2 images"));
		_paramLabelKeys.insert("min_overlap", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Overlap min entre 2 images"));

		/* GROUP : bundle_adjustment_params */
		_groupLabelKeys.insert("bundle_adjustment_params", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Ajustement de bundle"));
		_paramLabelKeys.insert("MaxIter", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Nombre max d'iterations dans l'optimisation"));
		_paramLabelKeys.insert("max_Roll", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Roulis maximum"));
		_paramLabelKeys.insert("max_Pitch", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Tangage maximum"));
		_paramLabelKeys.insert("ba_method", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Methode de mosaicage"));
		_paramLabelKeys.insert("cosmetic_stretch", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Etirement Couleur/Constraste"));

		/* GROUP : blending_displaying_params */
		_groupLabelKeys.insert("blending_displaying_params", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Fusion et affichage"));
		_paramLabelKeys.insert("expo_comp_method", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Methode de compensation d'exposition"));
		_paramLabelKeys.insert("seam_method", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Methode de raboutement des images"));
		_paramLabelKeys.insert("blending_method", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Methode de blending"));
		_paramLabelKeys.insert("no_plot", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Pas de trace (juste des barres de progression)"));
		_paramLabelKeys.insert("WriteGeoTiff", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Ecrire un fichier GeoTiff"));
		_paramLabelKeys.insert("block_drawing", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Dessin par bloc (meilleure utilisation de la memoire)"));
		_paramLabelKeys.insert("block_width", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Largeur moyenne de bloc"));
		_paramLabelKeys.insert("block_height", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Hauteur moyenne de bloc"));

		/*
		 * STRUCTURE : vehic_param
		 */

		/* GROUP : vehicle_params */
		_paramLabelKeys.insert("reproj_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Precision de correspondance du sift (en pixels)"));
		_paramLabelKeys.insert("X_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Precision UTM X (dev std en m)"));
		_paramLabelKeys.insert("Y_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Precision UTM Y (m)"));
		_paramLabelKeys.insert("alt_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Precision Altitude (m)"));
		_paramLabelKeys.insert("Roll_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Precision Roulis (rad)"));
		_paramLabelKeys.insert("Pitch_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Precision Tangage (rad)"));
		_paramLabelKeys.insert("Yaw_std", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Precision Lacet (rad)"));

		/*
		 * STRUCTURE : cam_param
		 */

		/* GROUP : advanced_camera_params */
		_groupLabelKeys.insert("advanced_camera_params", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Parametres reglages camera"));
		_paramLabelKeys.insert("K", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Matrice de la camera"));
		_paramLabelKeys.insert("V_Pose_C", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Position de la camera / centre de nav"));

		/*
		 * STRUCTURE : video_input_param
		 */

		/* GROUP : video_input_params */
		_paramLabelKeys.insert("idCamera", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "N. Camera"));
		_paramLabelKeys.insert("intervalCapture", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Interval de capture (ms)"));

		/*
		 * STRUCTURE : dim2_param
		 */

		/* GROUP : network_nav_input_params */
		_paramLabelKeys.insert("udp_port", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Port Udp dim2"));

		/*
		 * STRUCTURE : dataset_param
		 */

		/* GROUP : output_and_geo_params */
		_paramLabelKeys.insert("dataset_dir", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Chemin des donnees"));
		_paramLabelKeys.insert("output_dir", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Chemin du resultat"));
		_paramLabelKeys.insert("output_filename", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Prefixe du fichier de sortie"));
		_paramLabelKeys.insert("navFile", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Fichier de navigation"));
		_paramLabelKeys.insert("utm_zone", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Zone UTM"));
		_paramLabelKeys.insert("utm_hemisphere", QT_TRANSLATE_NOOP("MatisseTools::MatisseDictionnaryLabels", "Hemisphere UTM"));

	}
	
	QString getParamLabel(QString paramName) {
		if (!_paramLabelKeys.contains(paramName)) {
			qCritical() << QString("No label declared for parameter '%1'").arg(paramName);
			return "Unknown";
		}
		
		QString labelKey = _paramLabelKeys.value(paramName);
		QString translation = tr(labelKey.toLatin1());
		return translation;
	}
	
	QString getGroupLabel(QString groupName) {
		if (!_groupLabelKeys.contains(groupName)) {
			qDebug() << QString("No label declared for group '%1'").arg(groupName);
			return "";
		}
	
		QString labelKey = _groupLabelKeys.value(groupName);
		QString translation = tr(labelKey.toLatin1());
		return translation;
	}

};

}

#endif // MATISSEDICTIONNARYLABELS_H
