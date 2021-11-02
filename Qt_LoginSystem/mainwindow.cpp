#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainother.h"
#include "QMessageBox"
#include "QCheckBox"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_Pass->setEchoMode(QLineEdit::Password);
    ui->Title->setStyleSheet("QLabel{font-size:24px}");
    QPixmap Img(":/Resource/Imgs/Img.jfif");
    ui->img->setPixmap(Img.scaled(150, 150, Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_clicked()
{
    QString user = ui->lineEdit_User->text();
    QString pass = ui->lineEdit_Pass->text();

    if(user == "test" && pass == "test"){
        QMessageBox::information(this, "Login", "Welcome Back Sassy Baka");

    }
        else {
            QMessageBox::warning(this, "Login", "Incorrect Username or Password");
        }
    }

void MainWindow::on_actionNew_triggered(){
//    QMessageBox::information(this, "Title", "You Did Something Congrats!");


  //--------------------------------
    // |MODAL-LESS METHOD |
    // | which allows you to interact with everything | //

    other = new MainOther(this); //Setting the parent window
    other->show(); //displays new window (other)

    //--------------------------------

//--------------------------------
    // |MODAL METHOD |
    // | BLocks access to other things | //


//    MainOther window;
//    window.setModal(true);
//    window.exec();
//--------------------------------
}



