#include "mainother.h"
#include "ui_mainother.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>

MainOther::MainOther(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainOther)
{
    ui->setupUi(this);
}

MainOther::~MainOther()
{
    delete ui;
}

void MainOther::on_read_clicked(){


    QFile file(filepath);

    if(!file.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this, "Title", "No Files Selected");
    }
    QTextStream in(&file);
    QString text = in.readAll(); //connects the textfield
    ui->TextField->setPlainText(text);
    file.close();
}



void MainOther::on_write_clicked(){

    //once written in the text "TextField" The text will be sent to a text file
    QFile file(filepath);

    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this, "Title", "No Files Selected");
    }
    QTextStream out (&file);
    QString text = ui->TextField->toPlainText(); //connects the textfield
    out << text; //outputs the text into a text file
    file.flush();
    file.close();
}

void MainOther::on_save_clicked(){

    filepath= QFileDialog::getSaveFileName(this, "Select a file", "D:", "Filter(*txt");
    QFile newFile(filepath);
    if(!newFile.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this, "title", "No file selected");
    }
    QTextStream out (&newFile);
    QString text = ui->TextField->toPlainText();
    out << text;
    newFile.flush();
    newFile.close();
}

void MainOther::on_select_clicked(){
    QString filter = "Files(*.*)";
    QFile file = QFileDialog::getOpenFileName(this, "select a file...", "D:", filter);
}

