#include "dialog.h"
#include "ui_dialog.h"
#include "QMessageBox"
#include "QCheckBox"
#include "QDebug"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

//------------------------------------------------------------
//void Dialog::on_pushButton_clicked(){
//  //  QMessageBox *msg = new QMessageBox();
//  //  msg->setText("myText");
//   // msg->setWindowTitle("MyWindow");
//   // msg->open();


//}

//------------------------------------------------------------
void Dialog::on_btn_clicked()
{

    //------------------------------------------------------------
//   QMessageBox::StandardButton btn = QMessageBox::question(this, "This Window", "Your Mom", QMessageBox::Yes | QMessageBox::No);
//    if (btn == QMessageBox::Yes){
//        qDebug() << "Yes";
//    }
//    else {
//        qDebug() << "No";
//    }
    //------------------------------------------------------------


    dialog2 = new Dialog2(this);
    dialog2->show();
}



