#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMovie>
#include <QPoint>
#include <QMouseEvent>
#include <QString>
#include <QMessageBox>
#include <QTcpSocket>
#include "widgetclint.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
protected:
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);
    void sendarray(QByteArray array);
signals:
    void beginchat();
private slots:
    void on_PB1_clicked();
    void on_PB2_clicked();

    void on_PBLogin_clicked();

    void on_cBusername_editTextChanged(const QString &arg1);

private:
    Ui::Widget *ui;
    QPoint mPos;
    QLabel* mLabel;
    QString QuserOname[50];
    QString QpassOword[50];

    QString Qusername;
    QString Qpassword;
    widgetclint* secondwight;
    QTcpSocket* mTcp;
    bool ifconnect;
    bool ifclose;
};
#endif // WIDGET_H
