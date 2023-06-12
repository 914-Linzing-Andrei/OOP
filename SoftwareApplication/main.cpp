#include "PracticeProject1.h"
#include <QtWidgets/QApplication>
#include <vector>
#include "Service.h"
#include <memory>
#include "Subject.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    Service serv;

    vector<PracticeProject1*> applications;
    for (auto p : serv.getAllUsersService()) {
        PracticeProject1* w = new PracticeProject1{ serv };
        w->setWindowTitle(QString::fromStdString(p.getName())
            + " - "
            + QString::fromStdString(p.getType()));
        applications.push_back(w);
        serv.registerObserver(w);
    }

    for (auto p : applications) {
        p->show();
        //serv.registerObserver(p);
    }
    return a.exec();
}