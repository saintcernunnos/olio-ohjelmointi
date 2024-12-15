#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // olio
    ExampleClass obj;


    // metodin kutsu
    obj.startToWait();

    return a.exec();
}
