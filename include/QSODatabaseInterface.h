#pragma once

#include <vector>
#include <QSO.h>
#include <QFile>
#include <QtXml>
#include <QMessageBox>

namespace EasyHamLog {
	
	#define QSO_DATABASE_ELEMENT QDomElement
	#define QSO_DATABASE QDomDocument

	class QSODatabaseInterface {
	public:

		static bool readDatabase(const QString& name, QSO_DATABASE* database, QSO_DATABASE_ELEMENT* root, bool create=false);

		static QSO* nextQSO(QSO_DATABASE_ELEMENT* root);

		static QSO_DATABASE_ELEMENT nextElement(QSO_DATABASE_ELEMENT* root);

		static bool writeDatabase(const QString& name, std::vector<QSO*> qsos);
	};
}
