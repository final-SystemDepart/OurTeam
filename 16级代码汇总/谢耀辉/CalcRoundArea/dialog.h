#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
  class Dialog;
}

class Dialog : public QDialog
{
  Q_OBJECT

public:
  explicit Dialog(QWidget *parent = 0);
  ~Dialog();

private slots:
  void on_CountButton_clicked();

  void on_ExitButton_clicked();

private:
  Ui::Dialog *ui;
};

#endif // DIALOG_H
