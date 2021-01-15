#include "dynamicwallpaper.h"
#include "ui_dynamicwallpaper.h"
#include<QLabel>
#include<Windows.h>
#include<QDebug>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
//声明重载EnumWindows回调函数EnumWindowsProc
//BOOL CALLBACK  EnumWindowsProc(HWND hwnd, LPARAM lParam);
//声明一个结构体用于存储获取到的所有窗口类名
//typedef struct windows_class {
//    char window_class_name[256];
//    HWND win_hwnd;
//    windows_class *next;

//}windows_class;
//声明一个全局结构体
//windows_class *class_name;
//记录屏幕窗口类数量
//int num;

//BOOL CALLBACK  EnumWindowsProc(HWND hwnd, LPARAM lParam)

//{
//    //声明结构体
//    windows_class *enum_calss_name;
//    //初始化
//    enum_calss_name = (windows_class*)malloc(sizeof(windows_class));
//    //填充0到类名变量中
//    memset(enum_calss_name->window_class_name, 0, sizeof(enum_calss_name->window_class_name));
//    //获取窗口类名
//    GetClassNameA(hwnd, enum_calss_name->window_class_name, sizeof(enum_calss_name->window_class_name));
//    //获取窗口句柄
//    enum_calss_name->win_hwnd = hwnd;
//    //递增类数量
//    num += 1;
//    //链表形式存储
//    enum_calss_name->next = class_name;
//    class_name = enum_calss_name;
//    return TRUE;//这里必须返回TRUE,返回FALSE就不在枚举了
//}


Dynamicwallpaper::Dynamicwallpaper(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dynamicwallpaper)
{
    ui->setupUi(this);
        this->srcPath ="D:\\FdogProject\\Fdogwallpaper\\lib\\2037036.jpg";
        this->desktop=FindWindowEx(NULL,NULL,L"Progman",NULL);
        //this->desktop=FindWindowEx(NULL,NULL,L"WorkerW",NULL);
        qDebug()<<"找到desktop HWND："<<desktop;
        this->srclabel = new QLabel;
        this->bkwidget = new QWidget;
        func();
}

Dynamicwallpaper::~Dynamicwallpaper()
{
    delete ui;
}

void Dynamicwallpaper::func()
{

        srclabel->setParent(this->bkwidget);
        srclabel->setGeometry(0,0,600,500);
        srclabel->setScaledContents(true);//缩放
        //bkwidget->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
        //bkwidget->setWindowFlags(Qt::FramelessWindowHint|Qt::SubWindow);
        bkwidget->setWindowFlags(Qt::FramelessWindowHint|Qt::SubWindow|Qt::Desktop|Qt::X11BypassWindowManagerHint);
//                                 Qt::Tool |
//                                 Qt::WindowStaysOnTopHint |
//                                 Qt::X11BypassWindowManagerHint|
//                                 Qt::WindowMinimizeButtonHint);

        if(srcPath!="")
        {
            srclabel->setPixmap(QPixmap(srcPath));
        }
//         HWND aa;
//        if(desktop)
//        {
//             aa = SetParent((HWND)this->bkwidget->winId(),desktop);
//        }
//        qDebug()<<"返回值:"<<aa;
        //bkwidget->setParent(this,Qt::SubWindow);
        //bkwidget->showFullScreen();
        bkwidget->setFocusPolicy(Qt::NoFocus);
        bkwidget->show();
}





int Dynamicwallpaper::on_pushButton_clicked()
{
//    //获取窗口句柄
//    HWND hWnd = FindWindow(TEXT("Progman"), TEXT("Program Manager"));
//    if (hWnd == NULL) {
//        //printf("无法获取桌面句柄");
//        qDebug()<<"无法获取桌面句柄";
//        getchar();
//        return 0;
//    }
//    //发送多屏消息
//    SendMessage(hWnd, 0x052c, 0, 0);
//    //结构体初始化
//    class_name = (windows_class*)malloc(sizeof(windows_class));
//    //枚举屏幕上所有窗口
//    EnumWindows((WNDENUMPROC)EnumWindowsProc, 0);
//    //循环比对找到->WorkerW类
//    for (int i = 0; i<num; ++i) {
//        if (strncmp(class_name->window_class_name, "WorkerW", strlen(class_name->window_class_name)) == 0) {//以有效字符比对，防止连同字符“0”等无效字符也一同包含在一起比对
//            HWND window_hwnd = FindWindowExA(class_name->win_hwnd, 0, "SHELLDLL_DefView", NULL);
//            if (window_hwnd == NULL) {	//无法获取句柄代表该workerw类窗口没有子窗口也就是获取到图标下面的WorkerW类窗口了
//                                        //直接关闭该窗口
//                SendMessage(class_name->win_hwnd, 16, 0, 0);
//                break;
//            }
//            else {
//                //获取成功看一下下一个窗口是不是Progman
//                class_name = class_name->next;
//                if (class_name->window_class_name == "Progman") {
//                    HWND window_hwnd = FindWindowExA(class_name->win_hwnd, 0, "WorkerW", NULL);	//获取图标下面的WorkerW子窗口
//                    if (window_hwnd == NULL) {	//获取不到代表该窗口已经被关闭了
//                        //printf("该窗口已经被关闭..");
//                        qDebug()<<"该窗口已经被关闭..";
//                        getchar();
//                        break;
//                    }
//                    else {	//结束窗口
//                        SendMessage(window_hwnd, 16, 0, 0);
//                    }
//                }
//                else {//如果不是Progman就代表WorkerW类窗口的屏幕Z序列高于Progman，就说明获取到了WorkerW类窗口，直接关闭即可
//                    SendMessage(class_name->win_hwnd, 16, 0, 0);
//                }//注意WorkerW类是多屏消息产生的，是从Progman类分割下来的，在屏幕Z序列中会相邻在一起，所以不用担心next下一个类窗口不是Progman或者要删除的图标下面的WorkerW类

//            }
//            //break;		//这行代码注释掉，如果上面的代码没有关闭图标下的WorkerW窗口说明不是真正的多屏消息产生的WorkerW窗口，让其继续循环下去，将屏幕所有窗口遍历一遍！
//        }
//        class_name = class_name->next;
//    }
//    //到了这一步就可以将你的视频窗口嵌入到Progman类窗口当中了，嵌入之后也不会被遮挡，因为遮挡的WorkerW窗口已经被关闭了！
//    //所以这里我就随便嵌入一个窗口进入桌面看一下会不会被遮挡
//    //获取要嵌入窗口的句柄
//    HWND test_hwnd = FindWindow(NULL, TEXT("fdogwallpaper"));
//    if (test_hwnd == NULL) {
//        //printf("要嵌入的窗口不存在..");
//        qDebug()<<"要嵌入的窗口不存在..";
//        getchar();
//        return -1;
//    }
//    else {
//        SetParent(test_hwnd, hWnd);
//        //printf("窗口嵌入完成");
//        qDebug()<<"窗口嵌入完成";
//    }
//    getchar();
    return 0;
}
