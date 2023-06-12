#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PracticeSoftwareApplication2.h"
#include "Service.h"
#include "Observer.h"

class PracticeSoftwareApplication2 : public QMainWindow, public Observer
{
    Q_OBJECT

public:

    PracticeSoftwareApplication2(Service& service, QWidget* parent = nullptr);
    ~PracticeSoftwareApplication2();

    int getSelectedIndexFromAppsList();
    void update() override;

public slots:
    void addIssue();
    void resolveIssue();
    void removeIssue();

private:
    Ui::PracticeSoftwareApplication2Class ui;
    Service& service;
};
