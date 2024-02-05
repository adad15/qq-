/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QPushButton *PBregister;
    QPushButton *PBLogin;
    QComboBox *cBusername;
    QLineEdit *lEpassword;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *PBregister_2;
    QLabel *LBtop;
    QPushButton *PB2;
    QPushButton *PB1;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(410, 330);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 130, 410, 200));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 255);"));
        PBregister = new QPushButton(widget);
        PBregister->setObjectName("PBregister");
        PBregister->setGeometry(QRect(0, 170, 75, 23));
        PBregister->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: 9pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"color: rgb(0, 85, 255);"));
        PBLogin = new QPushButton(widget);
        PBLogin->setObjectName("PBLogin");
        PBLogin->setGeometry(QRect(93, 150, 243, 30));
        cBusername = new QComboBox(widget);
        cBusername->setObjectName("cBusername");
        cBusername->setGeometry(QRect(93, 50, 243, 25));
        cBusername->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"border-color: rgb(203, 203, 203);\n"
"border-style:solid;\n"
"border-top-width:0px;\n"
"border-right-width:0px;\n"
"border-bottom-width:1px;\n"
"border-left-width:0px;\n"
"}\n"
"QComboBox:hover{\n"
"border-color: rgb(0, 0, 0);\n"
"}\n"
"QComboBox:focus{\n"
"border-color: #03a9f4;  \n"
"box-shadow: 0 0 15px #03a9f4;\n"
"border-bottom-width:1.5px;\n"
"}\n"
"QComboBox::drop-down{\n"
"height:20px;\n"
"border-image: url(:/images/down.png);\n"
"}\n"
"QComboBox::drop-down:hover{\n"
"height:20px;\n"
"border-image: url(:/images/down-focus.png);\n"
"}"));
        cBusername->setEditable(true);
        lEpassword = new QLineEdit(widget);
        lEpassword->setObjectName("lEpassword");
        lEpassword->setGeometry(QRect(93, 90, 243, 25));
        lEpassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
"border-color: rgb(203, 203, 203);\n"
"border-style:solid;\n"
"border-top-width:0px;\n"
"border-right-width:0px;\n"
"border-bottom-width:1px;\n"
"border-left-width:0px;\n"
"}\n"
"QLineEdit:hover{\n"
"	border-color: rgb(0, 0, 0);\n"
"}\n"
"QLineEdit:focus{\n"
"border-color: #03a9f4;  \n"
"box-shadow: 0 0 15px #03a9f4;\n"
"border-bottom-width:1.5px;\n"
"}\n"
""));
        lEpassword->setReadOnly(false);
        widget1 = new QWidget(widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(90, 120, 249, 26));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(widget1);
        checkBox->setObjectName("checkBox");
        checkBox->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"color: rgb(103, 103, 103);"));

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget1);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"color: rgb(103, 103, 103);"));

        horizontalLayout->addWidget(checkBox_2);

        PBregister_2 = new QPushButton(widget1);
        PBregister_2->setObjectName("PBregister_2");
        PBregister_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"color: rgb(103, 103, 103);"));

        horizontalLayout->addWidget(PBregister_2);

        LBtop = new QLabel(Widget);
        LBtop->setObjectName("LBtop");
        LBtop->setGeometry(QRect(0, 0, 410, 130));
        PB2 = new QPushButton(Widget);
        PB2->setObjectName("PB2");
        PB2->setGeometry(QRect(386, 0, 24, 24));
        PB2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/tb2.png"), QSize(), QIcon::Normal, QIcon::Off);
        PB2->setIcon(icon);
        PB1 = new QPushButton(Widget);
        PB1->setObjectName("PB1");
        PB1->setGeometry(QRect(362, 0, 24, 24));
        PB1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/tb1.png"), QSize(), QIcon::Normal, QIcon::Off);
        PB1->setIcon(icon1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
#if QT_CONFIG(tooltip)
        PBregister->setToolTip(QCoreApplication::translate("Widget", "\347\202\271\345\207\273\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
#endif // QT_CONFIG(tooltip)
        PBregister->setText(QCoreApplication::translate("Widget", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        PBLogin->setText(QCoreApplication::translate("Widget", "\345\256\211\345\205\250\347\231\273\351\231\206", nullptr));
        lEpassword->setPlaceholderText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\350\207\252\345\212\250\347\231\273\351\231\206", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
#if QT_CONFIG(tooltip)
        PBregister_2->setToolTip(QCoreApplication::translate("Widget", "\347\202\271\345\207\273\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
#endif // QT_CONFIG(tooltip)
        PBregister_2->setText(QCoreApplication::translate("Widget", "\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
