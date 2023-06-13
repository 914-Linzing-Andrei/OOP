#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PracticeProject2.h"
#include "starsTableModel.h"
#include "Service.h"
#include "StarImage.h"

class PracticeProject2 : public QMainWindow
{
    Q_OBJECT

public:
    PracticeProject2(Service& service, starsTableModel* model, QWidget *parent = nullptr);
    ~PracticeProject2();

public slots:
    void starsCheckBox();
    void addStar();
    void onTheGo();
    void viewStar();

private:
    Service& service;
    Ui::PracticeProject2Class ui;
    starsTableModel* model;
};
