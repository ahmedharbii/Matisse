#ifndef ENRICHEDCOMBOBOX_H
#define ENRICHEDCOMBOBOX_H

#include <QComboBox>
#include <QStringList>

#include "EnrichedFormWidget.h"

namespace MatisseTools {

class EnrichedComboBox : public EnrichedFormWidget
{
    Q_OBJECT
public:
    explicit EnrichedComboBox(QWidget *parent = 0, QString label = "", QStringList values = QStringList(), QString defaultValue = "");

    bool currentValueChanged();
    virtual QString currentValue();
    qint32 currentIndex();

signals:

public slots:

private:
        QComboBox *_combo;
        qint32 _defaultIndex;
};
}
#endif // ENRICHEDCOMBOBOX_H