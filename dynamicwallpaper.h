#ifndef DYNAMICWALLPAPER_H
#define DYNAMICWALLPAPER_H

#include <QWidget>
#include<Windows.h>
#include<QLabel>
namespace Ui {
class Dynamicwallpaper;
}

class Dynamicwallpaper : public QWidget
{
    Q_OBJECT

public:
    explicit Dynamicwallpaper(QWidget *parent = 0);
    ~Dynamicwallpaper();
    void func();

private slots:
    int on_pushButton_clicked();

private:
    Ui::Dynamicwallpaper *ui;
    QString srcPath;
    HWND desktop;
    QWidget * bkwidget;
    QLabel * srclabel;
};

#endif // DYNAMICWALLPAPER_H
