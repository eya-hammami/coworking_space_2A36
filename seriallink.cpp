

#include "seriallink.h"
#include <QDebug>

seriallink::seriallink(QObject *parent) : QObject(parent)
{
 _serial.setPortName("COM5");
 _serial.setBaudRate(QSerialPort::Baud9600);
 _serial.setDataBits(QSerialPort::Data8);
 _serial.setParity(QSerialPort::NoParity);
 _serial.setStopBits(QSerialPort::OneStop);
 _serial.setFlowControl(QSerialPort::NoFlowControl);


 connect(&_serial, &QSerialPort::readyRead, this, &seriallink::newData);
}

seriallink::~seriallink(){
    closeConnection();
}


void seriallink::openConnection() {
    if(!_serial.open(QIODevice::ReadWrite))
         qDebug() << "NOOOOOOON";
    else
        qDebug()  << "OKKKK";

}

void seriallink::write(const char *messageToWrite){
    _serial.write(messageToWrite);


}



void seriallink::closeConnection(){
    _serial.close();

}

bool seriallink::isOpen(){
    return _serial.isOpen();

}

bool seriallink::isWritable(){

    return _serial.isWritable();
}


void seriallink::newData(){

  //_serial.waitForReadyRead(100);
  emit   gotNewData(_serial.readAll());;

}