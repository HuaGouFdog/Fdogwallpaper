/********************************************************************************
** Form generated from reading UI file 'dynamicwallpaper.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DYNAMICWALLPAPER_H
#define UI_DYNAMICWALLPAPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dynamicwallpaper
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *Dynamicwallpaper)
    {
        if (Dynamicwallpaper->objectName().isEmpty())
            Dynamicwallpaper->setObjectName(QStringLiteral("Dynamicwallpaper"));
        Dynamicwallpaper->resize(524, 405);
        Dynamicwallpaper->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        pushButton = new QPushButton(Dynamicwallpaper);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 150, 111, 81));

        retranslateUi(Dynamicwallpaper);

        QMetaObject::connectSlotsByName(Dynamicwallpaper);
    } // setupUi

    void retranslateUi(QWidget *Dynamicwallpaper)
    {
        Dynamicwallpaper->setWindowTitle(QApplication::translate("Dynamicwallpaper", "Form", nullptr));
        pushButton->setText(QApplication::translate("Dynamicwallpaper", "\345\243\201\347\272\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dynamicwallpaper: public Ui_Dynamicwallpaper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DYNAMICWALLPAPER_H
