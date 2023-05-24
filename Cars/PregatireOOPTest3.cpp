#include "PregatireOOPTest3.h"

PregatireOOPTest3::PregatireOOPTest3(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    this->populateList();
}

PregatireOOPTest3::~PregatireOOPTest3()
{}

void PregatireOOPTest3::populateList()
{
    this->ui.carsListWidget->clear();

    vector<Car> allCars = this->service.showAll();
    sort(allCars.begin(), allCars.end(), [](Car c1, Car c2) {
        return c1.getManufacturer() < c2.getManufacturer();
        });
    for (auto p : allCars) {
        this->ui.carsListWidget->addItem(QString::fromStdString(p.getManufacturer() + " | " + p.getModel()));
    }
}

void PregatireOOPTest3::ShowCarsWithFont() {
    this->ui.carsListWidget->clear();

    vector<Car> allCars = this->service.showAll();
    for (auto p : allCars) {
        QString itemText = QString::fromStdString(p.getManufacturer() + " | " + p.getModel() + " | " + to_string(p.getYear()) + " | " + p.getColour());
        QListWidgetItem* item = new QListWidgetItem(itemText);
        QColor fontColor = QColor(QString::fromStdString(p.getColour()));
        item->setForeground(QBrush(fontColor));
        this->ui.carsListWidget->addItem(item);
    }
}

void PregatireOOPTest3::showCarsWithSpecificManufacturer() {
    this->ui.carsWithSpecificManufacturerlistWidget->clear();
    vector<Car> allCars = this->service.showAll();
    string manufacturer = this->ui.manufacturerlineEdit->text().toStdString();
    for (auto p : allCars) {
        if (p.getManufacturer() == manufacturer) {
            this->ui.carsWithSpecificManufacturerlistWidget->addItem(
                QString::fromStdString(p.getManufacturer() + " | " + 
                                       p.getModel() + " | " + 
                                       to_string(p.getYear()) + " | " +
                                       p.getColour())
                );
        }
    }
}