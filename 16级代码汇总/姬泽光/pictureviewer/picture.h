#ifndef PICTURE_H
#define PICTURE_H

#include <QMainWindow>
#include <QWidget>
#include <QImage>
#include <QPixmap>
#include <QDir>
#include <QSize>
#include <QFileInfo>
#include <QFileInfoList>

namespace Ui {
class picture;
}

class picture : public QMainWindow
{
    Q_OBJECT
    QImage* img=new QImage;
    QString filename;
    QString path;
    QDir dir;
    int angle;
    QFileInfoList imgInfoList;
    int index;

public:
    explicit picture(QWidget *parent = 0);
    ~picture();

private slots:
    void on_pushButton_clicked();

    void on_openbtn_clicked();

    void on_next_clicked();

    void on_getsmall_clicked();

    void on_last_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::picture *ui;
};

#endif // PICTURE_H
