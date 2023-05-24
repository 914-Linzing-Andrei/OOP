#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PregatireOOPTest3.h"
#include "Service.h"

class PregatireOOPTest3 : public QMainWindow
{
    Q_OBJECT

public:
    PregatireOOPTest3(QWidget *parent = nullptr);
    ~PregatireOOPTest3();

private:
    Service service;
    Ui::PregatireOOPTest3Class ui;

    void populateList();

public slots:
    void ShowCarsWithFont();
    void showCarsWithSpecificManufacturer();
};
