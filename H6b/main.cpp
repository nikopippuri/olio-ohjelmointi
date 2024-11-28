#include "exampleclass.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass esimerkki = ExampleClass();
    esimerkki.startToWait();

    return a.exec();
}
