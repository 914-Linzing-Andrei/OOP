#include "PracticeProject2.h"
#include "Service.h"
#include <QtWidgets/QApplication>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Service service;
    
    starsTableModel* model = new starsTableModel{ service };
    vector<PracticeProject2*> windows;

    for (auto p : service.getAllAstronomers()) {
        PracticeProject2* w = new PracticeProject2{ service, model };
        w->setWindowTitle(QString::fromStdString(p.getName()));
        windows.push_back(w);
        
    }

    for (auto p : windows) {
        p->show();
    }

    return a.exec();
}
