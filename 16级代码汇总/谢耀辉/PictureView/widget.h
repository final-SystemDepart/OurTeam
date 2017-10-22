#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPixmap>    //像素图
#include <QMovie>     //动态图
#include <QImageReader>    //打开支持的图片格式

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
  //接收出错的信号
  void RecvPlayError(QImageReader::ImageReaderError error);
  //接收播放时帧号变化
  void RecvFrameNumber(int frameNumber);

private slots:
  void on_ButtonOpenPic_clicked();

  void on_ButtonOpenMov_clicked();

  void on_ButtonStart_clicked();

  void on_ButtonStop_clicked();

  void on_ButtonZoomIn_clicked();

  void on_ButtonZoomOut_clicked();

  void on_ButtonTurn_LtoR_clicked();

  void on_ButtonTurnLeft_clicked();

  void on_ButtonTurnRight_clicked();

private:
  Ui::Widget *ui;

  //像素图指针
  QPixmap *m_pPixMap;
  //动态图指针
  QMovie *m_pMovie;
  //是否为动态图
  bool m_bIsMovie;
  //动态图是否在播放
  bool m_bIsPlaying;
  //更新图像
  void ImgUpdate();
  //清除函数，打开新图之前清除旧图
  void ClearOldShow();
};

#endif // WIDGET_H
