/********************************************************************************
** Form generated from reading UI file 'widgetclint.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETCLINT_H
#define UI_WIDGETCLINT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetclint
{
public:
    QPushButton *pBclose;
    QTextEdit *tEchat;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QComboBox *cBsize;
    QToolButton *tBjc;
    QToolButton *tBqx;
    QToolButton *tBxhx;
    QToolButton *tBys;
    QToolButton *tBbc;
    QToolButton *tBqc;
    QTextEdit *tEsend;
    QPushButton *pBsend;
    QLabel *labelnumber;
    QTableWidget *tWlist;

    void setupUi(QWidget *widgetclint)
    {
        if (widgetclint->objectName().isEmpty())
            widgetclint->setObjectName("widgetclint");
        widgetclint->resize(700, 461);
        pBclose = new QPushButton(widgetclint);
        pBclose->setObjectName("pBclose");
        pBclose->setGeometry(QRect(676, 0, 24, 24));
        pBclose->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"image: url(:/images/tb2.png);"));
        tEchat = new QTextEdit(widgetclint);
        tEchat->setObjectName("tEchat");
        tEchat->setGeometry(QRect(20, 30, 401, 221));
        frame = new QFrame(widgetclint);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 260, 401, 31));
        frame->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fontComboBox = new QFontComboBox(frame);
        fontComboBox->setObjectName("fontComboBox");

        horizontalLayout->addWidget(fontComboBox);

        cBsize = new QComboBox(frame);
        cBsize->addItem(QString());
        cBsize->addItem(QString());
        cBsize->addItem(QString());
        cBsize->addItem(QString());
        cBsize->addItem(QString());
        cBsize->addItem(QString());
        cBsize->addItem(QString());
        cBsize->addItem(QString());
        cBsize->addItem(QString());
        cBsize->setObjectName("cBsize");

        horizontalLayout->addWidget(cBsize);

        tBjc = new QToolButton(frame);
        tBjc->setObjectName("tBjc");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        tBjc->setIcon(icon);
        tBjc->setCheckable(true);

        horizontalLayout->addWidget(tBjc);

        tBqx = new QToolButton(frame);
        tBqx->setObjectName("tBqx");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        tBqx->setIcon(icon1);
        tBqx->setCheckable(true);

        horizontalLayout->addWidget(tBqx);

        tBxhx = new QToolButton(frame);
        tBxhx->setObjectName("tBxhx");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        tBxhx->setIcon(icon2);
        tBxhx->setCheckable(true);

        horizontalLayout->addWidget(tBxhx);

        tBys = new QToolButton(frame);
        tBys->setObjectName("tBys");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        tBys->setIcon(icon3);

        horizontalLayout->addWidget(tBys);

        tBbc = new QToolButton(frame);
        tBbc->setObjectName("tBbc");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        tBbc->setIcon(icon4);

        horizontalLayout->addWidget(tBbc);

        tBqc = new QToolButton(frame);
        tBqc->setObjectName("tBqc");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        tBqc->setIcon(icon5);

        horizontalLayout->addWidget(tBqc);

        tEsend = new QTextEdit(widgetclint);
        tEsend->setObjectName("tEsend");
        tEsend->setGeometry(QRect(20, 300, 401, 111));
        pBsend = new QPushButton(widgetclint);
        pBsend->setObjectName("pBsend");
        pBsend->setGeometry(QRect(20, 420, 91, 23));
        labelnumber = new QLabel(widgetclint);
        labelnumber->setObjectName("labelnumber");
        labelnumber->setGeometry(QRect(610, 430, 81, 16));
        tWlist = new QTableWidget(widgetclint);
        if (tWlist->columnCount() < 1)
            tWlist->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tWlist->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tWlist->setObjectName("tWlist");
        tWlist->setGeometry(QRect(430, 30, 261, 381));

        retranslateUi(widgetclint);

        QMetaObject::connectSlotsByName(widgetclint);
    } // setupUi

    void retranslateUi(QWidget *widgetclint)
    {
        widgetclint->setWindowTitle(QCoreApplication::translate("widgetclint", "Form", nullptr));
        cBsize->setItemText(0, QCoreApplication::translate("widgetclint", "5", nullptr));
        cBsize->setItemText(1, QCoreApplication::translate("widgetclint", "7", nullptr));
        cBsize->setItemText(2, QCoreApplication::translate("widgetclint", "9", nullptr));
        cBsize->setItemText(3, QCoreApplication::translate("widgetclint", "11", nullptr));
        cBsize->setItemText(4, QCoreApplication::translate("widgetclint", "13", nullptr));
        cBsize->setItemText(5, QCoreApplication::translate("widgetclint", "15", nullptr));
        cBsize->setItemText(6, QCoreApplication::translate("widgetclint", "17", nullptr));
        cBsize->setItemText(7, QCoreApplication::translate("widgetclint", "19", nullptr));
        cBsize->setItemText(8, QCoreApplication::translate("widgetclint", "21", nullptr));

#if QT_CONFIG(tooltip)
        tBjc->setToolTip(QCoreApplication::translate("widgetclint", "\345\212\240\347\262\227", nullptr));
#endif // QT_CONFIG(tooltip)
        tBjc->setText(QCoreApplication::translate("widgetclint", "...", nullptr));
#if QT_CONFIG(tooltip)
        tBqx->setToolTip(QCoreApplication::translate("widgetclint", "\345\200\276\346\226\234", nullptr));
#endif // QT_CONFIG(tooltip)
        tBqx->setText(QCoreApplication::translate("widgetclint", "...", nullptr));
#if QT_CONFIG(tooltip)
        tBxhx->setToolTip(QCoreApplication::translate("widgetclint", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        tBxhx->setText(QCoreApplication::translate("widgetclint", "...", nullptr));
#if QT_CONFIG(tooltip)
        tBys->setToolTip(QCoreApplication::translate("widgetclint", "\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        tBys->setText(QCoreApplication::translate("widgetclint", "...", nullptr));
#if QT_CONFIG(tooltip)
        tBbc->setToolTip(QCoreApplication::translate("widgetclint", "\344\277\235\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
        tBbc->setText(QCoreApplication::translate("widgetclint", "...", nullptr));
#if QT_CONFIG(tooltip)
        tBqc->setToolTip(QCoreApplication::translate("widgetclint", "\346\270\205\351\231\244", nullptr));
#endif // QT_CONFIG(tooltip)
        tBqc->setText(QCoreApplication::translate("widgetclint", "...", nullptr));
        pBsend->setText(QCoreApplication::translate("widgetclint", "\345\217\221\351\200\201", nullptr));
        labelnumber->setText(QCoreApplication::translate("widgetclint", "\345\234\250\347\272\277\344\272\272\346\225\260:0\344\272\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tWlist->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("widgetclint", "\347\224\250\346\210\267\345\220\215:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widgetclint: public Ui_widgetclint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETCLINT_H
