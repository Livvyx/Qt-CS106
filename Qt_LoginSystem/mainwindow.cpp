#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QCheckBox"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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


