#include "mainwindow.h"
#include <QApplication>
#include <windows.h>
#include <QDebug>
#include"dynamicwallpaper.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
static BOOL enumUserWindowsCB(HWND hwnd, LPARAM lParam)
{
    long wflags = GetWindowLong(hwnd, GWL_STYLE);
    if (!(wflags & WS_VISIBLE)) return TRUE;

    HWND sndWnd;
    if (!(sndWnd = FindWindowEx(hwnd, NULL, L"SHELLDLL_DefView", NULL)))
        return TRUE;

    HWND targetWnd;
    if (!(targetWnd = FindWindowEx(sndWnd, NULL, L"SysListView32", L"FolderView")))
        return TRUE;

    HWND* resultHwnd = (HWND*)lParam;
    *resultHwnd = targetWnd;
    //*resultHwnd = hwnd;//set to workerW
    return FALSE;
}

HWND findDesktopIconWnd()
{
    HWND resultHwnd = NULL;
    EnumWindows((WNDENUMPROC)enumUserWindowsCB, (LPARAM)&resultHwnd);
    return resultHwnd;
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    HWND hdesktop = findDesktopIconWnd();
    WId wid = w.winId();
    qDebug()<<hdesktop;
    qDebug()<<(HWND)wid;
    qDebug()<<SetParent((HWND)wid, hdesktop);
    //w.setAttribute(Qt::WA_TranslucentBackground, true);
    //w.setWindowFlags(Qt::FramelessWindowHint|Qt::Tool);
    w.show();
    return a.exec();
}
















