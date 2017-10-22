#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QButtonGroup>    //按钮分组类

namespace Ui {
  class Widget;
}

class Widget : public QWidget
{
  Q_OBJECT

public:
  explicit Widget(QWidget *parent = 0);
  ~Widget();

public slots:
  void recvGenderID(int id);    //接收性别单选按钮分组信号
  void recvStatusID(int id);    //接收状态单选按钮分组信号

private slots:
  void on_radBtn_gpBox_1_toggled(bool checked);
  void on_radBtn_gpBox_2_toggled(bool checked);
  void on_radBtn_gpBox_3_toggled(bool checked);

  void on_pushButton_clicked();    //点击按钮

private:
  QButtonGroup *m_pGenderGroup;    //性别单选按钮分组
  QButtonGroup *m_pStatusGroup;    //状态单选按钮分组

  Ui::Widget *ui;
};

#endif // WIDGET_H
