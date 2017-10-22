#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QFileDialog>    //打开文件对话框
#include <QScrollArea>    //添加滚动区域
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Widget)
{
  ui->setupUi(this);

  //初始化成员变量
  m_pPixMap = NULL;
  m_pMovie = NULL;
  m_bIsMovie = false;
  m_bIsPlaying = false;

  //获取标签矩形
  QRect rcLabel = ui->labelShow->geometry();
  //为标签添加滚动区域
  QScrollArea *pSA = new QScrollArea(this);
  //把标签添加到滚动区域
  pSA->setWidget(ui->labelShow);
  //设置滚动区域占据面积
  pSA->setGeometry(rcLabel);

  //打印支持的图片格式
  qDebug()<<QImageReader::supportedImageFormats();
  //打印支持的动态图格式
  qDebug()<<QMovie::supportedFormats();
}

Widget::~Widget()
{
  ClearOldShow();
  delete ui;
}

//清除函数
void Widget::ClearOldShow()
{
  //清空标签内容
  ui->labelShow->clear();
  //删除像素图
  if (m_pPixMap != NULL)
    {
      delete m_pPixMap;
      m_pPixMap = NULL;
    }
  //删除动态图
  if (m_pMovie != NULL)
    {
      //如果正在播放则停止
      if (m_bIsPlaying)
        {
          m_pMovie->stop();
        }
      delete m_pMovie;
      m_pMovie = NULL;
    }
  //状态重置
  m_bIsMovie = false;
  m_bIsPlaying = false;
}

//打开图片
void Widget::on_ButtonOpenPic_clicked()
{
  QString strFileName;    //文件名
  strFileName = QFileDialog::getOpenFileName(this, tr("打开图片"), "",
                                             "Pictuers (*.jpg *.jpeg *.bmp *.png *.ico *.tif *.tiff);;All files(*)");
  if (strFileName.isEmpty())
    return;

  ClearOldShow();

  //打印文件名
  qDebug()<<strFileName;

  //建立像素图
  m_pPixMap = new QPixmap();
  if (m_pPixMap->load(strFileName))
    {
      //加载成功
      ui->labelShow->setPixmap(*m_pPixMap);
      //设置标签新大小，与图片一样
      ui->labelShow->setGeometry(m_pPixMap->rect());
    }
  else
    {
      //加载失败
      delete m_pPixMap;
      m_pPixMap = NULL;
      QMessageBox::critical(this, tr("打开失败"), tr("打开图片失败：\n%1").arg(strFileName));
    }
}

//打开动态图
void Widget::on_ButtonOpenMov_clicked()
{
  QString strFileName = QFileDialog::getOpenFileName(this, tr("打开动态图片"), "",
                                                     "Movies (*.gif);;All files(*)");
  if (strFileName.isEmpty())
    return;

  ClearOldShow();

  qDebug()<<strFileName;

  //建立动态图
  m_pMovie = new QMovie(strFileName);
  //判断动态图是否可用
  if ( !m_pMovie->isValid() )
    {
      //不可用
      QMessageBox::critical(this, tr("动态图不可用"),
                            tr("动态图格式不支持或读取错误：\n%1").arg(strFileName));
      delete m_pMovie;
      m_pMovie = NULL;
      return;
    }

  //动态图帧数
  int nCount = m_pMovie->frameCount();

  qDebug()<<tr("总帧数：%1").arg(nCount);

  if (nCount > 0)
    ui->horizontalSlider->setMaximum(nCount);
  else
    ui->horizontalSlider->setMaximum(100);    //如果没有帧数，设置默认100

  ui->labelShow->setMovie(m_pMovie);
  m_bIsMovie = true;

  //关联播放信号
  //播放出错
  connect(m_pMovie, SIGNAL(error(QImageReader::ImageReaderError)), this,
          SLOT(RecvPlayError(QImageReader::ImageReaderError)));
  //帧号变化
  connect(m_pMovie, SIGNAL(frameChanged(int)), this, SLOT(RecvFrameNumber(int)));

  //将动态图跳转到起始帧
  if (m_pMovie->jumpToFrame(0))
    {
      //设置标签的大小为帧的大小
      ui->labelShow->setGeometry(m_pMovie->frameRect());
    }
}

//开始播放
void Widget::on_ButtonStart_clicked()
{
  //不是动态图
  if ( !m_bIsMovie )
    return;
  //已经在播放
  if ( m_bIsPlaying )
    return;

  m_bIsPlaying = true;
  m_pMovie->start();

  //打印动态图默认的播放循环轮数，0 代表不循环，-1 代表无限循环
  qDebug()<< tr("循环计数：%1").arg( m_pMovie->loopCount() );

}

//停止播放
void Widget::on_ButtonStop_clicked()
{
  if ( !m_bIsMovie )
    return;
  if ( !m_bIsPlaying )
    return;

  m_bIsPlaying = false;
  m_pMovie->stop();
}

//接收播放错误信号
void Widget::RecvPlayError(QImageReader::ImageReaderError error)
{

  qDebug()<<tr("读取动态图错误的代码：%1").arg(error);

  QMessageBox::critical(this, tr("播放出错"),
                        tr("播放动态图出错：\n%1").arg(m_pMovie->fileName()));
  m_bIsPlaying = false;
}

//接收帧号变化信号
void Widget::RecvFrameNumber(int frameNumber)
{
  ui->horizontalSlider->setValue(frameNumber);
}

//图片缩放
void Widget::on_ButtonZoomIn_clicked()
{

}

void Widget::on_ButtonZoomOut_clicked()
{

}

//左右镜像
void Widget::on_ButtonTurn_LtoR_clicked()
{

}

//图像旋转
void Widget::on_ButtonTurnLeft_clicked()
{

}

void Widget::on_ButtonTurnRight_clicked()
{

}

//更新图像
void Widget::ImgUpdate()
{

}
