#include "secdialog.h"
#include "ui_secdialog.h"
#include "QDesktopServices"
#include "QUrl"

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/MacAntony"));
}
