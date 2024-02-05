#include "widgetclint.h"
#include "ui_widgetclint.h"
#include <QColorDialog>
#include <QFileDialog>
#include <QMessageBox.h>

widgetclint::widgetclint(QWidget *parent)
    : QWidget{parent}
    , ui(new Ui::widgetclint)
    , numbers(0)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);//设置窗口属性，为没有边框的窗口,不加这段代码窗口就可以移动

    //固定窗口大小
    setFixedSize(width(),height());

    //信号和槽的参数要匹配,设置窗口文本字体
    connect(ui->fontComboBox,&QFontComboBox::currentFontChanged,[=](const QFont &font){
        QTextCharFormat fmt;//文本字符格式
        fmt.setFont(font);//字体
        QTextCursor cursor = ui->tEsend->textCursor();//获取文本光标
        cursor.mergeCharFormat(fmt);//光标后的文字就用该格式显示
        ui->tEsend->mergeCurrentCharFormat(fmt);//textEdit使用当前的字符格式
    });
    //设置字体的大小
    void (QComboBox::*Bsize)(const QString &text)=&QComboBox::currentTextChanged;
    connect(ui->cBsize,Bsize,[=](const QString &text){
        ui->tEsend->setFontPointSize(text.toDouble());
        ui->tEsend->setFocus();
    });
    //加粗
    connect(ui->tBjc,&QToolButton::clicked,[=](bool checked){
        if(checked){
            ui->tEsend->setFontWeight(QFont::Bold);
        }else{
            ui->tEsend->setFontWeight(QFont::Normal);
        }
    });
    //倾斜
    connect(ui->tBqx,&QToolButton::clicked,[=](bool checked){
        ui->tEsend->setFontItalic(checked);
        ui->tEsend->setFocus();
    });
    //下划线
    connect(ui->tBxhx,&QToolButton::clicked,[=](bool checked){
        ui->tEsend->setFontUnderline(checked);
        ui->tEsend->setFocus();
    });
    //设置文本颜色
    connect(ui->tBys,&QToolButton::clicked,this,[=](){
        QColor color = QColorDialog::getColor(color,this);
        ui->tEsend->setTextColor(color);
    });

    //清空聊天栏
    connect(ui->tBqc,&QToolButton::clicked,[=](){
        ui->tEchat->clear();
    });

    //保存聊天记录
    connect(ui->tBbc,&QToolButton::clicked,[=](){
        if(ui->tEchat->document()->isEmpty()){
            QMessageBox::warning(this,"警告","警告！保存内容不能为空!");
        }else{
            QString filename = QFileDialog::getSaveFileName(this,"保存聊天记录","聊天记录","*.txt");
            if(filename.isEmpty()){
                QMessageBox::warning(this,"警告","警告！文件名不能为空!");
            }else{
                QFile file(filename);
                file.open(QIODevice::WriteOnly|QFile::Text);
                QTextStream stream(&file);
                stream<<ui->tEchat->toPlainText();
                file.close();
            }
        }
    });
    //设置聊天人数,从服务器端设置

    connect(this,&widgetclint::beginchat2,[=](){
        QString msg=Msg3;
        QStringList a = msg.split("`");
        QString b=a.at(0);
        QString c=a.at(1);
        ui->tEchat->insertPlainText(b);
        ui->tEchat->insertPlainText(":");
        ui->tEchat->append(c);
        ui->tEchat->append("");
        qDebug()<<"555555555555555";
        qDebug()<<c;
        qDebug()<<"555555555555555";
        qDebug()<<ui->tEchat->toPlainText();
        Msg3.clear();
    });
}

//窗口移动事件
void widgetclint::mouseMoveEvent(QMouseEvent* event){
    this->move(event->globalPos()-mPos);
}
void widgetclint::mousePressEvent(QMouseEvent* event){
    mPos=event->globalPos()-this->pos();
}

void widgetclint::on_pBclose_clicked()
{
    emit closesocket();
    this->close();
}

void widgetclint::numberspuls(){
    this->numbers++;
}

void widgetclint::setname(QString name){
    this->mname=name;
}

QString widgetclint::getMsg(){
    QString msg = ui->tEsend->toHtml();

    ui->tEsend->clear();
    ui->tEsend->setFocus();
    return msg;
}

void widgetclint::sndMsg(){
    Msg = mname;
    Msg.append("`");
    if(ui->tEsend->toPlainText()==""){
        QMessageBox::warning(this,"警告","发送的内容不能为空");
        return;
    }
    Msg.append(getMsg());
}

QString widgetclint::sMsg()
{
    return Msg;
}
QByteArray widgetclint::sMsg2()
{
    return Msg2;
}
void widgetclint::on_pBsend_clicked()
{
    sndMsg();
    emit setmsg();
    Msg.clear();
}
