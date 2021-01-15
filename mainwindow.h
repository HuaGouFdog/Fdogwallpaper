#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSignalMapper>
#include<Windows.h>
#include<QLabel>
#include"dynamicwallpaper.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString backstyle;
    QString TileWallpaper;
    QSignalMapper * myMapper;
    Dynamicwallpaper * wallpaper;
private slots:
    void setPushButton(int index);
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_18_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
