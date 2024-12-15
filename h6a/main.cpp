#include <iostream>
#include <QCoreApplication>
#include "myclass.h"

using namespace std;


int main(int argc, char *argv[]) {
    // QCoreApplication
    QCoreApplication a(argc, argv);

    // luodaan olio
    MyClass obj;

    // kutsutaan metodia
    obj.raiseMySignal();

    return a.exec();
}
