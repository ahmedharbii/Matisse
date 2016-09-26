#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>

#include "KeyValueList.h"

using namespace MatisseTools;

namespace Ui {
    class AboutDialog;
}

namespace MatisseServer {

class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    AboutDialog(QWidget *parent, KeyValueList meta);

protected slots:
    void slot_close();

private:
    Ui::AboutDialog *_ui;
};

}

#endif // ABOUTDIALOG_H