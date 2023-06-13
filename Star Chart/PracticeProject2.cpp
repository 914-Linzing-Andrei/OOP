#include "PracticeProject2.h"
#include <QStandardItem>

PracticeProject2::PracticeProject2(Service& service, starsTableModel* model, QWidget *parent)
    : QMainWindow(parent), model{ model }, service{ service }
{
    ui.setupUi(this);

    this->ui.starstableView->setModel(this->model);
    //connect(this->model, SIGNAL(dataChangedSignal()), this->ui.starstableView->model(), SLOT(dataChanged()));


}

PracticeProject2::~PracticeProject2()
{}

void PracticeProject2::addStar()
{
    string text = this->ui.addStarlineEdit->text().toStdString();
    stringstream ss(text);
    string name, constellation, RA_s, Dec_s, diameter_s;

    getline(ss, name, ',');
    getline(ss, RA_s, ',');
    getline(ss, Dec_s, ',');
    getline(ss, diameter_s);

    int RA = atoi(RA_s.c_str());
    int Dec = atoi(Dec_s.c_str());
    int diameter = atoi(diameter_s.c_str());
    bool ok = false;

    string atronomer = this->windowTitle().toStdString();
    for (auto p : service.getAllAstronomers()) {
        if (p.getName() == atronomer) {
            ok = true;
            constellation = p.getConstellation();
        }
    }

    this->service.addStar(Star(name, constellation, RA, Dec, diameter));
    model->addStar(Star(name, constellation, RA, Dec, diameter));
    this->ui.addStarlineEdit->clear();
    service.writeToFile("C:\\Users\\Andrei\\Desktop\\OOP\\PracticeProject2\\PracticeProject2\\Stars.txt");
}

void PracticeProject2::onTheGo()
{
    this->ui.listWidget->clear();
    string text = this->ui.lineEdit->text().toStdString();
    vector<Star> stars;

    if (ui.checkBox->isChecked()) {
        for (auto p : service.getAllAstronomers()) {
            if (p.getName() == windowTitle().toStdString()) {
                string constellation = p.getConstellation();
                for (auto p : service.getAllStars()) {
                    if (p.getConstelation() == constellation) {
                        stars.push_back(p);
                    }
                }
            }
        }
    }
    else {
        stars = service.getAllStars();
    }

    for (auto p : stars) {
        if (p.getName().find(text) != -1) {
            this->ui.listWidget->addItem(QString::fromStdString(p.getName()) + "|" +
                QString::fromStdString(p.getConstelation()) + "|" +
                QString::fromStdString(to_string(p.getRA())) + "|" +
                QString::fromStdString(to_string(p.getDec())) + "|" +
                QString::fromStdString(to_string(p.getDiamenter()))
            );
        }
    }
}

void PracticeProject2::viewStar()
{
    QModelIndexList selectedIndexes = ui.starstableView->selectionModel()->selectedIndexes();
    if (!selectedIndexes.isEmpty()) {
        QModelIndex index = selectedIndexes.first();
        int row = index.row();
        int column = index.column();

        QVariant data = ui.starstableView->model()->data(index);

        StarImage* starImage = new StarImage;
        starImage->setAttribute(Qt::WA_DeleteOnClose, false);
        starImage->show();
    }
}


void PracticeProject2::starsCheckBox()
{
    string astronomer = this->window()->windowTitle().toStdString();
    string constellation = "";
    for (auto p : service.getAllAstronomers()) {
        if (p.getName() == astronomer) {
            constellation = p.getConstellation();
        }
    }
    int i = 0, k = 0, arr[100];
    for (auto p : service.getAllStars()) {
        if (p.getConstelation() != constellation) {
            arr[k++] = i;
            
        }
        i++;
    }
    int aux = k;
    if (ui.checkBox->isChecked()) {
        while (k > 0) {
            ui.starstableView->hideRow(arr[k - 1]);
            k--;
        }
    }
    else {
        while (aux > 0) {
            ui.starstableView->showRow(arr[aux - 1]);
            aux--;
        }
    }
}
