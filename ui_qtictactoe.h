/********************************************************************************
** Form generated from reading UI file 'qtictactoe.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTICTACTOE_H
#define UI_QTICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTicTacToe
{
public:
    QAction *actionAbout;
    QAction *actionStart;
    QAction *actionExit;
    QWidget *centralWidget;
    QPushButton *A;
    QPushButton *B;
    QPushButton *C;
    QPushButton *D;
    QPushButton *E;
    QPushButton *F;
    QPushButton *I;
    QPushButton *H;
    QPushButton *G;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *QTicTacToe)
    {
        if (QTicTacToe->objectName().isEmpty())
            QTicTacToe->setObjectName(QStringLiteral("QTicTacToe"));
        QTicTacToe->resize(223, 257);
        actionAbout = new QAction(QTicTacToe);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionStart = new QAction(QTicTacToe);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        actionExit = new QAction(QTicTacToe);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(QTicTacToe);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        A = new QPushButton(centralWidget);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(10, 10, 61, 61));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        A->setFont(font);
        A->setCheckable(false);
        B = new QPushButton(centralWidget);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(80, 10, 61, 61));
        B->setFont(font);
        C = new QPushButton(centralWidget);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(150, 10, 61, 61));
        C->setFont(font);
        D = new QPushButton(centralWidget);
        D->setObjectName(QStringLiteral("D"));
        D->setGeometry(QRect(10, 80, 61, 61));
        D->setFont(font);
        E = new QPushButton(centralWidget);
        E->setObjectName(QStringLiteral("E"));
        E->setGeometry(QRect(80, 80, 61, 61));
        E->setFont(font);
        F = new QPushButton(centralWidget);
        F->setObjectName(QStringLiteral("F"));
        F->setGeometry(QRect(150, 80, 61, 61));
        F->setFont(font);
        I = new QPushButton(centralWidget);
        I->setObjectName(QStringLiteral("I"));
        I->setGeometry(QRect(150, 150, 61, 61));
        I->setFont(font);
        H = new QPushButton(centralWidget);
        H->setObjectName(QStringLiteral("H"));
        H->setGeometry(QRect(80, 150, 61, 61));
        H->setFont(font);
        G = new QPushButton(centralWidget);
        G->setObjectName(QStringLiteral("G"));
        G->setGeometry(QRect(10, 150, 61, 61));
        G->setFont(font);
        QTicTacToe->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QTicTacToe);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 223, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        QTicTacToe->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTicTacToe);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTicTacToe->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionStart);
        menuFile->addSeparator();
        menuFile->addAction(actionAbout);
        menuFile->addAction(actionExit);

        retranslateUi(QTicTacToe);
        QObject::connect(actionExit, SIGNAL(triggered()), QTicTacToe, SLOT(close()));

        QMetaObject::connectSlotsByName(QTicTacToe);
    } // setupUi

    void retranslateUi(QMainWindow *QTicTacToe)
    {
        QTicTacToe->setWindowTitle(QApplication::translate("QTicTacToe", "QTicTacToe", 0));
        actionAbout->setText(QApplication::translate("QTicTacToe", "About", 0));
        actionStart->setText(QApplication::translate("QTicTacToe", "Start", 0));
        actionExit->setText(QApplication::translate("QTicTacToe", "Exit", 0));
        A->setText(QString());
        B->setText(QString());
        C->setText(QString());
        D->setText(QString());
        E->setText(QString());
        F->setText(QString());
        I->setText(QString());
        H->setText(QString());
        G->setText(QString());
        menuFile->setTitle(QApplication::translate("QTicTacToe", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class QTicTacToe: public Ui_QTicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTICTACTOE_H
