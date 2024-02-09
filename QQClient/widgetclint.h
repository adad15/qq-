#ifndef WIDGETCLINT_H
#define WIDGETCLINT_H

#include <QWidget>
#include <QMovie>
#include <QPoint>
#include <QMouseEvent>
#include <QByteArray>
#include <QFile>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui {
class widgetclint;
}
QT_END_NAMESPACE

class widgetclint : public QWidget
{
    Q_OBJECT
public:
    explicit widgetclint(QWidget *parent = nullptr);
    void numberspuls();
    void sndMsg();
    QString getMsg();
    void userEnt(QString username);
    void userLft(QString username,QString time);
    void setname(QString);
    QString sMsg();
    QByteArray sMsg2();
    QByteArray Msg3;
    QString fileName;
    qint64 fileSize;
    qint64 sendSize;
    QFile file;
    QFile file2;
    bool isMsg{false};
    bool isFile{false};
    bool isstart{false};
    QString recfileName;
    qint64 recfileSize;
    qint64 recsendSize;

signals:
    void closesocket();
    void setmsg();
    void beginchat2();
    void sedFile();

protected:
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);
private slots:
    void on_pBclose_clicked();
    void on_pBsend_clicked();

    void on_pBseclet_clicked();

    void on_pBsendfile_clicked();

private:
    Ui::widgetclint *ui;
    QPoint mPos;
    int numbers;
    QString mname;
    QString Msg;
    QByteArray Msg2;
};

#endif // WIDGETCLINT_H
