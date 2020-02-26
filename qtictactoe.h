#ifndef QTICTACTOE_H
#define QTICTACTOE_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class QTicTacToe;
}

class QTicTacToe : public QMainWindow
{
    Q_OBJECT

public:
    explicit QTicTacToe(QWidget *parent = 0);
    ~QTicTacToe();
    void losing();
    bool checkingWinX(int x, int y);
    bool checkingWinO(int x, int y);
    QPushButton* buttonXYNum(int num1, int num2);
    void refreshMap();
    void MoveX();
    bool lose();
    bool win();

private slots:
    void on_actionStart_triggered();
    void click();

    void on_actionAbout_triggered();

private:
    Ui::QTicTacToe *ui;
};

#endif // QTICTACTOE_H
