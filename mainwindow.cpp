#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include<QFileDialog>
#include<QSettings>
#include<Windows.h>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
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
      //用标签显示预览图
      QPixmap background = QPixmap(ui->lineEdit_2->text());
      //ui->label->setStyleSheet(QString("border-image:url(%1;)").arg(ui->lineEdit_2->text()));
      ui->label->setPixmap(background);
      ui->label->resize(background.height(),background.width());
}

void MainWindow::on_pushButton_2_clicked()
{
    //壁纸注册表表
    QSettings wallPaper("HKEY_CURRENT_USER\\Control Panel\\Desktop",
                       QSettings::NativeFormat);

    //新的桌面图片路径
    QString path(ui->lineEdit_2->text());

    //给壁纸注册表设置新的值（新的图片路径）
    wallPaper.setValue("Wallpaper",path);
    QByteArray byte = path.toLocal8Bit();

    //调用windowsAPI
    SystemParametersInfoA(SPI_SETDESKWALLPAPER,0,byte.data(),SPIF_SENDWININICHANGE|SPIF_UPDATEINIFILE);

}
