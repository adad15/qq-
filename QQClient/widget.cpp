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
        secondwight->isMsg=true;
        QByteArray msg=this->secondwight->sMsg().toUtf8();
        qDebug()<<"1111111111";
        qDebug()<<"connect成功";
        qDebug()<<"1111111111";
        qint64 len{};
        //while(len < sizeof(msg.data())){
        while(len < msg.size()){
            qint64 ret = mTcp->write(msg.data()+len,msg.size()-len);
            if(ret == -1){
                QMessageBox::information(this,"失败","发送数据失败。");
                break;
            }
            if(ret==0){
                QMessageBox::information(this,"失败","缓冲区满了");
            }
            len += ret;
            qDebug()<<"999999999999999999";
            qDebug()<<len;
            qDebug()<<"999999999999999999";
        }
        qDebug()<<"2222222222222";
        qDebug()<<this->secondwight->sMsg().toUtf8().data();
        qDebug()<<"2222222222222";
    });

    connect(this,&Widget::beginchat,secondwight,&widgetclint::beginchat2);
    //接受数据
    connect(mTcp,&QTcpSocket::readyRead,[=](){
        if(secondwight->isMsg){
            QByteArray array = mTcp->readAll();
            qDebug()<<"33333333333333333";
            //qDebug()<<array;
            qDebug()<<"33333333333333333";
            secondwight->sMsg2()=array;
            secondwight->Msg3=array;
            //qDebug()<<"44444444444444";
            //qDebug()<<secondwight->sMsg2();
            qDebug()<<"444444444444444";
            //qDebug()<<secondwight->Msg3;
            qDebug()<<"444444444444444";
            array.clear();
            emit beginchat();
            secondwight->isMsg = false;
        }
        if(secondwight->isFile){
            QByteArray array = mTcp->readAll();
            if(secondwight->isstart){
                qDebug()<<"66666666666666666666667777777777777777777";
                secondwight->isstart = false;
                secondwight->recfileName = QString(array).section("##",0,0);
                secondwight->recfileSize = QString(array).section("##",1,1).toInt();

                secondwight->recsendSize = 0;

                secondwight->file2.setFileName(secondwight->recfileName);

                bool isok = secondwight->file2.open(QIODevice::Append);
                if(isok==false){
                    qDebug()<<"文件打开失败";
                }
            }else {
                qDebug()<<"7777777777777777777777777777777777777";
                qint64 len = secondwight->file2.write(array);
                secondwight->recsendSize +=len;
                //secondwight->file2.flush();
                if(secondwight->recsendSize==secondwight->recfileSize){
                    QMessageBox::information(secondwight,"完成","文件已经全部接受完成");
                    secondwight->file2.close();
                    secondwight->isFile = false;
                }
            }

        }
    });

    connect(&myTimer,&QTimer::timeout,[=](){
        myTimer.stop();
        //secondwight->isFile = true;
        qint64 len = 0;
        char buf[4*1024]{};
        do{
           len = secondwight->file.read(buf,sizeof(buf));
           len = mTcp->write(buf,len);
           secondwight->sendSize+=len;
        }while(len>0);
        //为什么放在下面需要再点击一次按钮？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？
        if(secondwight->sendSize==secondwight->fileSize){
            QMessageBox::information(secondwight,"完毕","文件已全部发送完毕");

            secondwight->file.close();
        }
    });

    //发送文件
    connect(secondwight,&widgetclint::sedFile,[=](){
        secondwight->isFile = true;
        QString str = QString("%1##%2").arg(secondwight->fileName).arg(secondwight->fileSize);
        secondwight->isstart = true;
        qint64 len = mTcp->write(str.toUtf8().data());

        if(len>0){
            //距离太近会产生粘包
            //用定时器解决问题
            myTimer.start(40);//间隔20毫秒触发信号

        }else{
            qDebug()<<"发送文件失败";
            secondwight->file.close();
        }
        //secondwight->file.flush();
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
