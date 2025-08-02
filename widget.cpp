#include "widget.h"
#include "./ui_widget.h"
#include <QSerialPortInfo>
#include <QtSerialPort>
#include <QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList serialNamePort;

    serialPort = new QSerialPort(this);

    connect(serialPort,SIGNAL(QIODevice::readyRead()),this,SLOT(serialPortReadyRead_Slot()));

    for(const auto &it: QSerialPortInfo::availablePorts()){
        serialNamePort<<it.portName();
    }
    ui->SerialCb->addItems(serialNamePort);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::serialPortReadyRead_Slot()
{
    QString buffer;
    buffer = QString(serialPort->readAll());
    ui->ReceiveEdit->appendPlainText(buffer);
}

void Widget::on_OpenBt_clicked()
{
    QSerialPort::BaudRate baudrate;
    QSerialPort::DataBits databit;
    QSerialPort::StopBits stopbit;
    QSerialPort::Parity checkbit;

    switch(ui->baudrateCb->currentIndex())
    {
        case 0 :{baudrate = QSerialPort::Baud4800; break;}
        case 1 :{baudrate = QSerialPort::Baud9600; break;}
        case 2 :{baudrate = QSerialPort::Baud115200; break;}
    }

    switch(ui->DataCb->currentIndex())
    {
        case 0: {databit = QSerialPort::Data5; break;}
        case 1: {databit = QSerialPort::Data6; break;}
        case 2: {databit = QSerialPort::Data7; break;}
        case 3: {databit = QSerialPort::Data8; break;}
    }

    switch(ui->StopCb->currentIndex())
    {;
    case 0: {stopbit = QSerialPort::OneStop;break;}
    case 1: {stopbit = QSerialPort::OneAndHalfStop;break;}
    case 2: {stopbit = QSerialPort::TwoStop;break;}
    }

    switch(ui->CheckCb->currentIndex())
    {
    case 0: {checkbit = QSerialPort::NoParity;break;}
    }


    serialPort->setPortName(ui->SerialCb->currentText());
    serialPort->setBaudRate(baudrate);
    serialPort->setDataBits(databit);
    serialPort->setStopBits(stopbit);
    serialPort->setParity(checkbit);

    if(serialPort->open(QIODevice::ReadWrite) == true){
        QMessageBox::information(this,"提示","成功");
    }
    else{
        QMessageBox::critical(this,"提示","失败");
    }
}


void Widget::on_CloseBt_clicked()
{
    serialPort->close();
}


void Widget::on_SendBt_clicked()
{
    serialPort->write(ui->SendEdit->text().toLocal8Bit().data());
}




void Widget::on_DeleteBt_clicked()
{
    ui->ReceiveEdit->clear();
}

