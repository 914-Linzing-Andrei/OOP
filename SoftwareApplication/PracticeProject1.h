#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PracticeProject1.h"
#include "Service.h"
#include "Observer.h"

class PracticeProject1 : public QMainWindow, public Observer
{
    Q_OBJECT

public:

    PracticeProject1(Service& service, QWidget* parent = nullptr);
    ~PracticeProject1();

    int getSelectedIndexFromAppsList();
    void update() override;

public slots:
    void addIssue();
    void resolveIssue();
    void removeIssue();

private:
    Ui::PracticeProject1Class ui;
    Service& service;
};