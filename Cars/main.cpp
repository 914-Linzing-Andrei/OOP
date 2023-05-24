#include "PregatireOOPTest3.h"
#include <QtWidgets/QApplication>
#include "Service.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Service service;
    PregatireOOPTest3 w;
    w.show();
    return a.exec();
}
