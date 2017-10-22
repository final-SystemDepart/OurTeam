#include "dialog.h"
#include "ui_dialog.h"

const static double PI = 3.1415926535;

Dialog::Dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Dialog)
{
  ui->setupUi(this);
}

Dialog::~Dialog()
{
  delete ui;
}

void Dialog::on_CountButton_clicked()
{
    bool ok;
    QString temp;
    QString getValue = ui->RadiusInput->text();
    double radius = getValue.toDouble(&ok);
    double area = radius*radius*PI;
    ui->AreaOutput->setText(temp.setNum(area));
}

void Dialog::on_ExitButton_clicked()
{
    exit(0);
}
