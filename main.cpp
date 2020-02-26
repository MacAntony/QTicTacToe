#include "qtictactoe.h"
#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    qApp->setStyle(QStyleFactory::create("Fusion"));
    QApplication a(argc, argv);
    QTicTacToe w;
    w.show();

    return a.exec();
}
