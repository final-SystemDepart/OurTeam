#include "widget.h"
#include "ui_widget.h"

#include <QDebug>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Widget)
{
  ui->setupUi(this);

  //新建性别虚拟分组，并添加按钮和id
  m_pGenderGroup = new QButtonGroup(this);
  m_pGenderGroup->addButton(ui->radBtn_type_LM,0);
  m_pGenderGroup->addButton(ui->radBtn_type_MN,1);

  //新建状态虚拟分组，并添加按钮和id
  m_pStatusGroup = new QButtonGroup(this);
  m_pStatusGroup->addButton(ui->radBtn_status_1,1);
  m_pStatusGroup->addButton(ui->radBtn_status_2,2);
  m_pStatusGroup->addButton(ui->radBtn_status_3,3);

  //关联两个分组的信号和槽
  connect(m_pGenderGroup, SIGNAL(buttonClicked(int)), this, SLOT(recvGenderID(int)));
  connect(m_pStatusGroup, SIGNAL(buttonClicked(int)), this, SLOT(recvStatusID(int)));

  //设置默认选中
  ui->radBtn_type_LM->setChecked(true);
  ui->radBtn_status_1->setChecked(true);
  ui->radBtn_gpBox_1->setChecked(true);
}

Widget::~Widget()
{
  delete ui;
}

//接收性别分组的id
void Widget::recvGenderID(int id)
{
  qDebug()<<tr("性别：");
  switch (id)
    {
    case 0:
      qDebug()<<ui->radBtn_type_LM->text();
      break;
    case 1:
      qDebug()<<ui->radBtn_type_MN->text();
      break;
    default:
      break;
    }
}

//接收状态分组的id
void Widget::recvStatusID(int id)
{
  qDebug()<<tr("状态：");
  switch (id)
    {
    case 1:
      qDebug()<<ui->radBtn_status_1->text();
      break;
    case 2:
      qDebug()<<ui->radBtn_status_2->text();
      break;
    case 3:
      qDebug()<<ui->radBtn_status_3->text();
      break;
    default:
      break;
    }
}

void Widget::on_radBtn_gpBox_1_toggled(bool checked)
{
  if (checked)
    qDebug()<<tr("阶段：")<<ui->radBtn_gpBox_1->text();
}

void Widget::on_radBtn_gpBox_2_toggled(bool checked)
{
  if (checked)
    qDebug()<<tr("阶段：")<<ui->radBtn_gpBox_2->text();
}

void Widget::on_radBtn_gpBox_3_toggled(bool checked)
{
  if (checked)
    qDebug()<<tr("阶段：")<<ui->radBtn_gpBox_3->text();
}

void Widget::on_pushButton_clicked()
{

//  QMessageBox::information(this, tr("O的K"), tr("我觉得不行"));

//  QMessageBox msg(this);
//  msg.setWindowTitle("Alert");
//  msg.setText("我觉得还行");
//  msg.setBaseSize(320,480);
//  msg.setButtonText(1,"不行");
//  msg.exec();

  QString result;

  //性别分组
  int nGenderID = m_pGenderGroup->checkedId();    //获取选中的id
  result += tr("性别：");
  switch (nGenderID)
    {
    case 0:
      result += ui->radBtn_type_LM->text()+"\n";
      break;
    case 1:
      result += ui->radBtn_type_MN->text()+"\n";
      break;
    default:
      result += tr("未选中\n");
    }

  //状态分组
  int nStatusID = m_pStatusGroup->checkedId();
  result += tr("状态：");
  switch (nStatusID)
    {
    case 1:
      result += ui->radBtn_status_1->text()+"\n";
      break;
    case 2:
      result += ui->radBtn_status_2->text()+"\n";
      break;
    case 3:
      result += ui->radBtn_status_3->text()+"\n";
      break;
    default:
      result += tr("未选中\n");
    }

  //阶段分组
  result += tr("阶段：");
  if (ui->radBtn_gpBox_1->isChecked())
    result += ui->radBtn_gpBox_1->text()+"\n";
  else if (ui->radBtn_gpBox_2->isChecked())
    result += ui->radBtn_gpBox_2->text()+"\n";
  else if (ui->radBtn_gpBox_3->isChecked())
    result += ui->radBtn_gpBox_3->text()+"\n";
  else
    result += tr("未选中\n");

  //弹窗显示
  QMessageBox::information(this, tr("汇总"), result);
}
