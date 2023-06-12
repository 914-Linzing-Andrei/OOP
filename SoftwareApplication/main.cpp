#include "PracticeSoftwareApplication2.h"
#include <QtWidgets/QApplication>
#include <vector>
#include "Service.h"
#include <memory>
#include "Subject.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Service serv;

    vector<PracticeSoftwareApplication2*> applications;
    for (auto p : serv.getAllUsersService()) {
        PracticeSoftwareApplication2* w = new PracticeSoftwareApplication2{ serv };
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
