#include "picture.h"
#include "ui_picture.h"
#include<QFileDialog>
#include<QImageReader>
#include<QLabel>
#include<QMessageBox>
#include<QPixmap>
#include<QFileInfo>
picture::picture(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::picture)
{
    ui->setupUi(this);
}

picture::~picture()
{
    delete ui;
}




void picture::on_openbtn_clicked()
{

    filename = QFileDialog::getOpenFileName(this, tr("选择图片:"),
        "D:", tr("Images (*.png *.bmp *.jpg *.gif)"));
    if (filename.isEmpty()) {
        return ;
    }
    else
    {

        if (!(img->load(filename))) {
            QMessageBox::information(this, tr("错误"), tr("打开文件错误"));
            delete img;
            return ;
    }
        ui->label->setPixmap(QPixmap::fromImage(*img));
    }


    imgInfoList.clear();
    dir = QFileInfo(filename).absolutePath();
    path = QFileInfo(filename).absolutePath();
    QFileInfoList infoList = dir.entryInfoList(QDir::Files);
    QFileInfo info;
    for (int i = 0; i < infoList.count(); i++) {
           info = infoList.at(i);
           QString suffix = info.suffix();
           if (suffix == "jpg" || suffix == "bmp" || suffix == "png") {
               imgInfoList.append(info);
           }
       }
       QFileInfo curImageInfo = QFileInfo(filename);
       for (int j = 0; j < imgInfoList.count(); j++) {
           info = imgInfoList.at(j);
           if (info.fileName() == curImageInfo.fileName()) {
               index = j;
           }
       }
}

void picture::on_pushButton_clicked()
{
    QMatrix matrix;
    matrix.rotate(90);
    *img=img->transformed(matrix);
    ui->label->setPixmap(QPixmap::fromImage(*img));
}

void picture::on_next_clicked()
{
        index = index + 1;
        int count = imgInfoList.count();
        if (index == count) {
            index = 0;
        }

        filename.clear();
        filename.append(path);
        filename += "/";
        filename += imgInfoList.at(index).fileName();

        if (!(img->load(filename))) {
            QMessageBox::information(this, tr("错误"), tr("已经是最后一张了"));
            delete img;
            return ;
        }
       ui->label->setPixmap(QPixmap::fromImage(*img));
}



void picture::on_getsmall_clicked()
{
    *img=img->scaled(img->width()*0.8,img->height()*0.8,Qt::KeepAspectRatio);
    ui->label->setPixmap(QPixmap::fromImage(*img));
}

void picture::on_last_clicked()
{
    index = index - 1;
    int count = imgInfoList.count();
    if (index < 0) {
       index = count - 1;
    }

    filename.clear();
    filename.append(path);
    filename += "/";
    filename += imgInfoList.at(index).fileName();
    if (!(img->load(filename))) {
        QMessageBox::information(this, tr("错误"), tr("已经是第一张啦"));
        delete img;
        return ;
    }
   ui->label->setPixmap(QPixmap::fromImage(*img));
}

void picture::on_pushButton_2_clicked()
{
    QMatrix matrix;
    matrix.rotate(270);
    *img=img->transformed(matrix);
    ui->label->setPixmap(QPixmap::fromImage(*img));
}

void picture::on_pushButton_3_clicked()
{
    *img=img->scaled(img->width()/0.8,img->height()/0.8,Qt::KeepAspectRatio);
    ui->label->setPixmap(QPixmap::fromImage(*img));
}
