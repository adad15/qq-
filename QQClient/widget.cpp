#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , secondwight(new widgetclint)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);//设置窗口属性，为没有边框的窗口,不加这段代码窗口就可以移动

    //创建套接字对象
    mTcp = new QTcpSocket(this);

    this->QuserOname[0]="3012265452";
    this->QpassOword[0]="589589";
    this->QuserOname[1]="123456789";
    this->QpassOword[1]="785785";

    //固定窗口大小
    setFixedSize(width(),height());

    //获取图片，这里获取的图片是从Qt的资源文件xx.qrc中读取的
    QPixmap *pixmap = new QPixmap(":/images/dt1.gif");
    //设置pixmap缩放的尺寸
    pixmap->scaled(ui->LBtop->size(), Qt::KeepAspectRatio);
    //这个属性的作用是允许（禁止）label缩放它的内容充满整个可用的空间
    ui->LBtop->setScaledContents(true);
    //设置label的pixmap
    ui->LBtop->setPixmap(*pixmap);

    //设置动图
    QMovie* movie =new QMovie(this);
    movie->setFileName(":/images/dt1.gif");
    movie->start();
    ui->LBtop->setMovie(movie);

    ui->PBLogin->setStyleSheet("border: 1px solid gray;border-radius: 4px;"
                               "background-color: rgba(85, 170, 255,180);"
                               "color: rgb(255, 255, 255);font: 12pt 'STXinwei';");

    //设置QcomboBox默认提示
    ui->cBusername->lineEdit()->setPlaceholderText("QQ号码/手机/邮箱");

    connect(ui->lEpassword,&QLineEdit::textChanged,[=](){
        Qpassword=ui->lEpassword->text();
        qDebug()<<Qpassword;
    });

    //发送数据
    connect(secondwight,&widgetclint::setmsg,[=](){
        qDebug()<<"1111111111";
        qDebug()<<"connect成功";
        qDebug()<<"1111111111";
        mTcp->write(this->secondwight->sMsg().toUtf8().data());
        qDebug()<<"2222222222222";
        qDebug()<<this->secondwight->sMsg().toUtf8().data();
        qDebug()<<"2222222222222";
    });

    connect(this,&Widget::beginchat,secondwight,&widgetclint::beginchat2);
    //接受数据
    connect(mTcp,&QTcpSocket::readyRead,[=](){
        QByteArray array = mTcp->readAll();
        qDebug()<<"33333333333333333";
        qDebug()<<array;
        qDebug()<<"33333333333333333";
        secondwight->sMsg2()=array;
        secondwight->Msg3=array;
        qDebug()<<"44444444444444";
        qDebug()<<secondwight->sMsg2();
        qDebug()<<"444444444444444";
        qDebug()<<secondwight->Msg3;
        qDebug()<<"444444444444444";
        emit beginchat();
    });


    //关闭套接字
    connect(secondwight,&widgetclint::closesocket,[=](){
        mTcp->disconnectFromHost();
        ifclose=mTcp->waitForDisconnected();
        if(ifclose){
            QMessageBox::information(this,"失败","与服务器断开连接失败。");
        }else{
            QMessageBox::information(this,"成功","与服务器断开连接成功。");
        }
    });
}

Widget::~Widget()
{
    delete ui;
}

//窗口移动事件
void Widget::mouseMoveEvent(QMouseEvent* event){
    this->move(event->globalPos()-mPos);
}
void Widget::mousePressEvent(QMouseEvent* event){
    mPos=event->globalPos()-this->pos();
}

void Widget::on_PB1_clicked()
{
    this->showMinimized();
}


void Widget::on_PB2_clicked()
{
    this->close();
}

//点击登陆按钮槽函数
void Widget::on_PBLogin_clicked()
{
    for(int i{};i<2;i++)
    {
        if(QuserOname[i]==Qusername&&QpassOword[i]==Qpassword){
            qDebug()<<"连接成功";
            //关闭当前窗口
            this->hide();
            //显示mLabel
            this->secondwight->show();
            break;
        }else{
            QMessageBox::information(this,"错误","账号或密码错误，请重试。");
            break;
        }
    }

    QString ip{"192.168.244.1"};
    qint16 port{9528};

    mTcp->connectToHost(QHostAddress(ip), port);
    ifconnect = mTcp->waitForConnected();
    if(!ifconnect){
        QMessageBox::information(this,"错误","网络连接失败，请重试。");
        this->secondwight->close();
        this->show();
    }
}

void Widget::on_cBusername_editTextChanged(const QString &arg1)
{
    Qusername=arg1.toUtf8().data();
    this->secondwight->setname(Qusername); //设置名字
    qDebug()<<Qusername;
}
