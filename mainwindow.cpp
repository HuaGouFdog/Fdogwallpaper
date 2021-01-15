#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include<QFileDialog>
#include<QSettings>
#include<QSize>
#include<Windows.h>
#include<QDebug>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     backstyle = "10";
     TileWallpaper = "0";
     myMapper = new QSignalMapper(this);
     //按钮数组
     QPushButton * button[15]={ui->pushButton_3,ui->pushButton_4,ui->pushButton_5,ui->pushButton_6,ui->pushButton_7,
                             ui->pushButton_8,ui->pushButton_9,ui->pushButton_10,ui->pushButton_11,ui->pushButton_12,
                             ui->pushButton_13,ui->pushButton_14,ui->pushButton_15,ui->pushButton_16,ui->pushButton_17};
     for(int i = 0;i<15;i++)
     {
          connect(button[i], SIGNAL(clicked(bool)), myMapper, SLOT(map()));
          myMapper->setMapping(button[i], i);
      }
      connect(myMapper, SIGNAL(mapped(int)), this, SLOT(setPushButton(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::setPushButton(int index)
{
    QString image_array[15]={"2007786.jpg","2033165.jpg","2038116.jpg","2038121.jpg","2038308.jpg",
                     "2039758.jpg","2038610.jpg","2039639.jpg","2039857.jpg","2035571.jpg",
                     "2036148.jpg","2035655.jpg","2035575.jpg","2038608.jpg","2035706.jpg"};
    QSettings wallPaper("HKEY_CURRENT_USER\\Control Panel\\Desktop",
                       QSettings::NativeFormat);
    //新的桌面图片路径
    QString URL = qApp->applicationDirPath();
    QString URL_2 = QString("/../lib/%1").arg(image_array[index]);
    QString path(URL+URL_2);
    qDebug()<<"jia"<<path;
    //给壁纸注册表设置新的值（新的图片路径）
    wallPaper.setValue("Wallpaper",path);
    QByteArray byte = path.toLocal8Bit();
    SystemParametersInfoA(SPI_SETDESKWALLPAPER,0,byte.data(),SPIF_SENDWININICHANGE|SPIF_UPDATEINIFILE);
}
void MainWindow::on_pushButton_clicked()
{
    QString curPash =QDir::currentPath();
      QString dlgTitle="选择图片文件";
      //jpeg、jpg、png
      QString filter="图片文件(*.jpeg *.jpg *.png);;jpeg文件(*.jpeg);;jpg文件(*.jpg);;png文件(*.png);;所有文件(*.*)";
      QStringList fileList = QFileDialog::getOpenFileNames(this,dlgTitle,curPash,filter);
      if(fileList.count()<1)
          return;
      for(int i = 0;i<fileList.count();i++)
      {
          ui->lineEdit_2->setText(fileList.at(i));
          //将文件路径显示在文本框上
      }
      //设置显示范围在宽500，高300
      QSize picSize(500,300);
      //获取图像
      QPixmap background = QPixmap(ui->lineEdit_2->text());
      //按500:300比例缩放图像
      QPixmap scaledPixmap = background.scaled(picSize, Qt::KeepAspectRatio);
      //不按比例缩放 QPixmap scaledPixmap = background.scaled(picSize);
      //用标签显示预览图
      ui->label->setPixmap(scaledPixmap);
}

void MainWindow::on_pushButton_2_clicked()
{

    //拉伸是2   适应是6   填充是10   平铺和居中都是0
      if(ui->comboBox->currentIndex()==0)
          backstyle = "10";
      if(ui->comboBox->currentIndex()==1)
          backstyle = "6";
      if(ui->comboBox->currentIndex()==2)
          backstyle = "2";
      if(ui->comboBox->currentIndex()==3)
      {
          backstyle = "0";
          TileWallpaper = "1";
      }
      if(ui->comboBox->currentIndex()==4)
      {
          backstyle = "0";
          TileWallpaper = "0";
      }
    //壁纸注册表表
    QSettings wallPaper("HKEY_CURRENT_USER\\Control Panel\\Desktop",
                       QSettings::NativeFormat);

    //新的桌面图片路径
    QString path(ui->lineEdit_2->text());

    //给壁纸注册表设置新的值（新的图片路径）
    wallPaper.setValue("Wallpaper",path);
    //设置背景样式
    qDebug()<<"当前选择：";
    qDebug()<<backstyle;
    wallPaper.setValue("WallpaperStyle", backstyle);
    //因为平铺和居中都是0，而TileWallpaper是判断是否平铺
    wallPaper.setValue("TileWallpaper",TileWallpaper);
    wallPaper.sync();
    QByteArray byte = path.toLocal8Bit();

    //调用windowsAPI
    SystemParametersInfoA(SPI_SETDESKWALLPAPER,0,byte.data(),SPIF_SENDWININICHANGE|SPIF_UPDATEINIFILE);

}

void MainWindow::on_pushButton_3_clicked()
{

    QSettings wallPaper("HKEY_CURRENT_USER\\Control Panel\\Desktop",
                       QSettings::NativeFormat);
    //新的桌面图片路径
    QString URL = qApp->applicationDirPath();
    QString URL_2 = "/../lib/2007786.jpg";
    QString path(URL+URL_2);
    qDebug()<<path;
    //给壁纸注册表设置新的值（新的图片路径）
    wallPaper.setValue("Wallpaper",path);
    QByteArray byte = path.toLocal8Bit();
    SystemParametersInfoA(SPI_SETDESKWALLPAPER,0,byte.data(),SPIF_SENDWININICHANGE|SPIF_UPDATEINIFILE);
}

void MainWindow::on_pushButton_18_clicked()
{
    this->wallpaper = new Dynamicwallpaper;
   this->wallpaper->show();
}
