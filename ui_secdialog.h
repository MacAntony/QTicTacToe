/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QStringLiteral("SecDialog"));
        SecDialog->setWindowModality(Qt::NonModal);
        SecDialog->resize(288, 169);
        SecDialog->setFocusPolicy(Qt::NoFocus);
        SecDialog->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        SecDialog->setWindowIcon(icon);
        pushButton = new QPushButton(SecDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 140, 80, 21));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/github-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        label = new QLabel(SecDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 141, 16));

        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QApplication::translate("SecDialog", "About", 0));
        pushButton->setText(QApplication::translate("SecDialog", "My GitHub", 0));
        label->setText(QApplication::translate("SecDialog", "Made by Anton Makarenkov", 0));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
