#ifndef MAINOTHER_H
#define MAINOTHER_H

#include <QDialog>

namespace Ui {
class MainOther;
}

class MainOther : public QDialog
{
    Q_OBJECT

public:
    explicit MainOther(QWidget *parent = nullptr);
    ~MainOther();
    QString filepath;
private:
      Ui::MainOther *ui;
private slots:
    void on_read_clicked();
    void on_write_clicked();
    void on_select_clicked();
    void on_save_clicked();

};

#endif // MAINOTHER_H
