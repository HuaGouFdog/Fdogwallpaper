/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QLabel *label_18;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QWidget *tab_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1071, 672);
        MainWindow->setMinimumSize(QSize(1071, 672));
        MainWindow->setMaximumSize(QSize(1075, 672));
        QIcon icon;
        icon.addFile(QStringLiteral("lib/wall.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1071, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 21));

        horizontalLayout->addWidget(lineEdit_2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(70, 0));

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(78, 22));

        horizontalLayout->addWidget(comboBox);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 30, 1081, 641));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        scrollArea = new QScrollArea(tab_1);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 1070, 641));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1051, 1019));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 1019));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(390, 20, 341, 300));
        label->setMinimumSize(QSize(0, 300));
        label->setStyleSheet(QStringLiteral("background-color: rgb(189, 74, 255);"));
        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(0, 962, 1051, 35));
        label_18->setStyleSheet(QStringLiteral("border-image: url(:/lib/line.png);"));
        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 10, 271, 151));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/lib/2007786.jpg);"));
        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 170, 271, 151));
        pushButton_4->setStyleSheet(QStringLiteral("border-image: url(:/lib/2033165.jpg);"));
        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(280, 10, 491, 311));
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/lib/2038116.jpg);"));
        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(780, 10, 271, 151));
        pushButton_6->setStyleSheet(QStringLiteral("border-image: url(:/lib/2038121.jpg);"));
        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(780, 170, 271, 151));
        pushButton_7->setStyleSheet(QStringLiteral("border-image: url(:/lib/2038308.jpg);"));
        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(500, 330, 271, 151));
        pushButton_8->setStyleSheet(QStringLiteral("border-image: url(:/lib/2039758.jpg);"));
        pushButton_9 = new QPushButton(scrollAreaWidgetContents);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(500, 490, 271, 151));
        pushButton_9->setStyleSheet(QStringLiteral("border-image: url(:/lib/2038610.jpg);"));
        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(780, 490, 271, 151));
        pushButton_10->setStyleSheet(QStringLiteral("border-image: url(:/lib/2039639.jpg);"));
        pushButton_11 = new QPushButton(scrollAreaWidgetContents);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(780, 330, 271, 151));
        pushButton_11->setStyleSheet(QStringLiteral("border-image: url(:/lib/2039857.jpg);"));
        pushButton_12 = new QPushButton(scrollAreaWidgetContents);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(0, 650, 271, 151));
        pushButton_12->setStyleSheet(QStringLiteral("border-image: url(:/lib/2035571.jpg);"));
        pushButton_13 = new QPushButton(scrollAreaWidgetContents);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(0, 810, 271, 151));
        pushButton_13->setStyleSheet(QStringLiteral("border-image: url(:/lib/2036148.jpg);"));
        pushButton_14 = new QPushButton(scrollAreaWidgetContents);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(280, 810, 271, 151));
        pushButton_14->setStyleSheet(QStringLiteral("border-image: url(:/lib/2035655.jpg);"));
        pushButton_15 = new QPushButton(scrollAreaWidgetContents);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(280, 650, 271, 151));
        pushButton_15->setStyleSheet(QLatin1String("border-image: url(:/lib/2035575.jpg);\n"
""));
        pushButton_16 = new QPushButton(scrollAreaWidgetContents);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(0, 330, 491, 311));
        pushButton_16->setStyleSheet(QStringLiteral("border-image: url(:/lib/2038608.jpg);"));
        pushButton_17 = new QPushButton(scrollAreaWidgetContents);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(560, 650, 491, 311));
        pushButton_17->setStyleSheet(QStringLiteral("border-image: url(:/lib/2035706.jpg);"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\212\261\347\213\227Fdog\345\243\201\347\272\270", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\350\265\204\346\272\220", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\345\245\221\345\220\210\345\272\246\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "\345\241\253\345\205\205", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "\351\200\202\345\272\224", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "\346\213\211\344\274\270", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "\345\271\263\351\223\272", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "\345\261\205\344\270\255", nullptr));

        pushButton_2->setText(QApplication::translate("MainWindow", "\344\275\277\347\224\250\345\243\201\347\272\270", nullptr));
        label->setText(QString());
        label_18->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QString());
        pushButton_16->setText(QString());
        pushButton_17->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "\351\235\231\346\200\201\345\243\201\347\272\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\212\250\346\200\201\345\243\201\347\272\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
