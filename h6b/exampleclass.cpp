#include "exampleclass.h"
#include <QDebug>
#include <QThread>

ExampleClass::ExampleClass(QObject* parent) : QObject(parent) {
    qDebug()<<"Start";
    // yhdistetään
    connect(this, SIGNAL(readyToSay()), this, SLOT(sayHelloSlot()));
    qDebug()<<"End";
}

// metodien toteutukset
void ExampleClass::startToWait() {
    QThread::msleep(1000);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot() {
    qDebug() <<"Terve";
}
