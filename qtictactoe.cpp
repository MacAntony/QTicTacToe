#include "qtictactoe.h"
#include "ui_qtictactoe.h"
#include "QMessageBox"
#include <QDateTime>
#include "iostream"
#include<QDebug>
#include <ctime>
#include <secdialog.h>

char map[2][2];
QTicTacToe::QTicTacToe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QTicTacToe)
{
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    ui->setupUi(this);

    connect(ui->A, SIGNAL (clicked()), this, SLOT(click()));
    connect(ui->B, SIGNAL (clicked()), this, SLOT(click()));
    connect(ui->C, SIGNAL (clicked()), this, SLOT(click()));
    connect(ui->D, SIGNAL (clicked()), this, SLOT(click()));
    connect(ui->E, SIGNAL (clicked()), this, SLOT(click()));
    connect(ui->F, SIGNAL (clicked()), this, SLOT(click()));
    connect(ui->G, SIGNAL (clicked()), this, SLOT(click()));
    connect(ui->H, SIGNAL (clicked()), this, SLOT(click()));
    connect(ui->I, SIGNAL (clicked()), this, SLOT(click()));


    QPalette darkPalette;

    darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(25, 25, 25));
    darkPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);

    qApp->setPalette(darkPalette);

    ui->A->setText("");
    ui->B->setText("");
    ui->C->setText("");
    ui->D->setText("");
    ui->E->setText("");
    ui->F->setText("");
    ui->G->setText("");
    ui->H->setText("");
    ui->I->setText("");

    for (int x = 0; x < 3; ++x) {
        for (int y = 0; y < 3; ++y) {
            map[x][y] = ' ';
        }
    }
    MoveX();
}

QTicTacToe::~QTicTacToe()
{
    delete ui;
}

int numXButton(char button){
    switch (button) {
    case 'A':
        return 0;
        break;
    case 'B':
        return 1;
        break;
    case 'C':
        return 2;
        break;
    case 'D':
        return 0;
        break;
    case 'E':
        return 1;
        break;
    case 'F':
        return 2;
        break;
    case 'G':
        return 0;
        break;
    case 'H':
        return 1;
        break;
    case 'I':
        return 2;
        break;
    default:
        break;
    }
}

int numYButton(char button){
    switch (button) {
    case 'A':
        return 0;
        break;
    case 'B':
        return 0;
        break;
    case 'C':
        return 0;
        break;
    case 'D':
        return 1;
        break;
    case 'E':
        return 1;
        break;
    case 'F':
        return 1;
        break;
    case 'G':
        return 2;
        break;
    case 'H':
        return 2;
        break;
    case 'I':
        return 2;
        break;
    default:
        break;
    }
}

bool QTicTacToe::checkingWinX(int x, int y){
    refreshMap();
    if( x != -1 && y != -1){
        map[x][y] = 'X';
    }
    if(map[0][0] == 'X' && map[0][1] == 'X' && map[0][2] == 'X'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }
    else if(map[1][0] == 'X' && map[1][1] == 'X' && map[1][2] == 'X'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }
    else if(map[2][0] == 'X' && map[2][1] == 'X' && map[2][2] == 'X'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }


    else if(map[0][0] == 'X' && map[1][0] == 'X' && map[2][0] == 'X'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }
    else if(map[0][1] == 'X' && map[1][1] == 'X' && map[2][1] == 'X'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }
    else if(map[0][2] == 'X' && map[1][2] == 'X' && map[2][2] == 'X'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }


    else if(map[0][0] == 'X' && map[1][1] == 'X' && map[2][2] == 'X'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }
    else if(map[0][2] == 'X' && map[1][1] == 'X' && map[2][0] == 'X'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }

    else{
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return false;
    }
}

QTextStream& qStdOut()
{
    static QTextStream ts( stdout );
    return ts;
}

bool QTicTacToe::checkingWinO(int x, int y){
    refreshMap();
    if( x != -1 && y != -1){
        map[x][y] = 'O';
    }
    if(map[0][0] == 'O' && map[0][1] == 'O' && map[0][2] == 'O'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }
    if(map[1][0] == 'O' && map[1][1] == 'O' && map[1][2] == 'O'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }

    if(map[2][0] == 'O' && map[2][1] == 'O' && map[2][2] == 'O'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }


    if(map[0][0] == 'O' && map[1][0] == 'O' && map[2][0] == 'O'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }
    if(map[0][1] == 'O' && map[1][1] == 'O' && map[2][1] == 'O'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }
    if(map[0][1] == 'O' && map[1][2] == 'O' && map[2][2] == 'O'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }


    if(map[0][0] == 'O' && map[1][1] == 'O' && map[2][2] == 'O'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }
    if(map[0][2] == 'O' && map[1][1] == 'O' && map[2][0] == 'O'){
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return true;
    }

    else{
        if( x != -1 && y != -1){map[x][y] = ' ';}
        return false;
    }
}

void QTicTacToe::refreshMap(){
    map[0][0] = ui->A->text().toStdString().c_str()[0];
    map[1][0] = ui->B->text().toStdString().c_str()[0];
    map[2][0] = ui->C->text().toStdString().c_str()[0];
    map[0][1] = ui->D->text().toStdString().c_str()[0];
    map[1][1] = ui->E->text().toStdString().c_str()[0];
    map[2][1] = ui->F->text().toStdString().c_str()[0];
    map[0][2] = ui->G->text().toStdString().c_str()[0];
    map[1][2] = ui->H->text().toStdString().c_str()[0];
    map[2][2] = ui->I->text().toStdString().c_str()[0];
}

QPushButton* QTicTacToe::buttonXYNum(int x, int y){


    if(x == 0 && y == 0) {return ui->A;}
    if(x == 1 && y == 0) {return ui->B;}
    if(x == 2 && y == 0) {return ui->C;}
    if(x == 0 && y == 1) {return ui->D;}
    if(x == 1 && y == 1) {return ui->E;}
    if(x == 2 && y == 1) {return ui->F;}
    if(x == 0 && y == 2) {return ui->G;}
    if(x == 1 && y == 2) {return ui->H;}
    if(x == 2 && y == 2) {return ui->I;}
}

void checkingWin();
static int randomBetween(int low, int high, int seed)
{
    qsrand(seed);
    return (qrand() % ((high + 1) - low) + low);
}

void QTicTacToe::click()
{
    QPushButton *button = (QPushButton *)sender();
    if(button->text() == "" && !lose()){
        int numX = numXButton(button->objectName().toStdString().c_str()[0]);
        int numY = numYButton(button->objectName().toStdString().c_str()[0]);
        map[numX][numY] = 'O';
        buttonXYNum(numX, numY)->setText("O");
        if(!win()){
            MoveX();
        }
    }
}

bool QTicTacToe::lose(){
    if((ui->A->text() == "X" && ui->B->text() == "X" && ui->C->text() == "X") ||
       (ui->D->text() == "X" && ui->E->text() == "X" && ui->F->text() == "X") ||
       (ui->G->text() == "X" && ui->H->text() == "X" && ui->I->text() == "X") ||

       (ui->A->text() == "X" && ui->D->text() == "X" && ui->G->text() == "X") ||
       (ui->B->text() == "X" && ui->E->text() == "X" && ui->H->text() == "X") ||
       (ui->C->text() == "X" && ui->F->text() == "X" && ui->I->text() == "X") ||

       (ui->A->text() == "X" && ui->E->text() == "X" && ui->I->text() == "X") ||
       (ui->G->text() == "X" && ui->E->text() == "X" && ui->C->text() == "X"))
    {
        QMessageBox box;
        box.setText("You lose");
        box.exec();
        return true;
    }

}

bool QTicTacToe::win(){
    if((ui->A->text() == "O" && ui->B->text() == "O" && ui->C->text() == "O") ||
       (ui->D->text() == "O" && ui->E->text() == "O" && ui->F->text() == "O") ||
       (ui->G->text() == "O" && ui->H->text() == "O" && ui->I->text() == "O") ||

       (ui->A->text() == "O" && ui->D->text() == "O" && ui->G->text() == "O") ||
       (ui->B->text() == "O" && ui->E->text() == "O" && ui->H->text() == "O") ||
       (ui->C->text() == "O" && ui->F->text() == "O" && ui->I->text() == "O") ||

       (ui->A->text() == "O" && ui->E->text() == "O" && ui->I->text() == "O") ||
       (ui->G->text() == "O" && ui->E->text() == "O" && ui->C->text() == "O"))
    {
        QMessageBox box;
        box.setText("You win");
        box.exec();
        return true;
    }

}

void QTicTacToe::MoveX(){
    bool exitFlag = false;
    bool IFflag = false;
    refreshMap();
    for (int y = 0; y < 3; y++) {
        if(exitFlag){ exitFlag = false; break;}
        for (int x = 0; x < 3; x++) {
            if(exitFlag){ break;}
            if(buttonXYNum(x, y)->text() != "O" && buttonXYNum(x, y)->text() != "X"){
                    if(checkingWinX(x, y)){
                        buttonXYNum(x, y)->setText("X");
                        //refreshMap();
                        exitFlag = true;
                    }
                    else if(checkingWinO(x, y)) {
                        buttonXYNum(x, y)->setText("X");
                        //refreshMap();
                        exitFlag = true;
                    }
                    else if(x == 2 && y == 2){
                        IFflag = true;
                        exitFlag = true;
                    }
                }
            else if(x == 2 && y == 2){
                IFflag = true;
                exitFlag = true;
            }
        }
    }
    if(IFflag && (map[0][0] == ' ' || map[0][1] == ' ' || map[0][2] == ' ' ||
                  map[1][0] == ' ' || map[1][1] == ' ' || map[1][2] == ' ' ||
                  map[2][0] == ' ' || map[2][1] == ' ' || map[2][2] == ' ')){
        loop:
        //int num1r = randomBetween(0, 2, QDateTime::currentMSecsSinceEpoch());
        //int num2r = randomBetween(0, 2, QDateTime::currentMSecsSinceEpoch());
        srand(time(0));
        int num1r = 0 + rand() % 3;
        int num2r = 0 + rand() % 3;
        if(buttonXYNum(num1r, num2r)->text() != "O" && buttonXYNum(num1r, num2r)->text() != "X"){
            map[num1r][num2r] = 'X';
            buttonXYNum(num1r, num2r)->setText("X");
            IFflag = false;
        }
        else{
            goto loop;
        }
    }
    lose();
}

void QTicTacToe::on_actionStart_triggered()
{
    ui->A->setText("");
    ui->B->setText("");
    ui->C->setText("");
    ui->D->setText("");
    ui->E->setText("");
    ui->F->setText("");
    ui->G->setText("");
    ui->H->setText("");
    ui->I->setText("");
    for (int x = 0; x < 3; ++x) {
        for (int y = 0; y < 3; ++y) {
            map[x][y] = ' ';
        }
    }
    MoveX();
}

void QTicTacToe::on_actionAbout_triggered()
{
    SecDialog secDialog;
    secDialog.setModal(true);
    secDialog.exec();
}
