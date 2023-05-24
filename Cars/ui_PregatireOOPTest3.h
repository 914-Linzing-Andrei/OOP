/********************************************************************************
** Form generated from reading UI file 'PregatireOOPTest3.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREGATIREOOPTEST3_H
#define UI_PREGATIREOOPTEST3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PregatireOOPTest3Class
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListWidget *carsListWidget;
    QPushButton *FontpushButton;
    QListWidget *carsWithSpecificManufacturerlistWidget;
    QLabel *label;
    QLineEdit *manufacturerlineEdit;
    QPushButton *showCarspushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PregatireOOPTest3Class)
    {
        if (PregatireOOPTest3Class->objectName().isEmpty())
            PregatireOOPTest3Class->setObjectName("PregatireOOPTest3Class");
        PregatireOOPTest3Class->resize(314, 579);
        centralWidget = new QWidget(PregatireOOPTest3Class);
        centralWidget->setObjectName("centralWidget");
        widget = new QWidget(centralWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 2, 258, 501));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        carsListWidget = new QListWidget(widget);
        carsListWidget->setObjectName("carsListWidget");

        verticalLayout->addWidget(carsListWidget);

        FontpushButton = new QPushButton(widget);
        FontpushButton->setObjectName("FontpushButton");

        verticalLayout->addWidget(FontpushButton);

        carsWithSpecificManufacturerlistWidget = new QListWidget(widget);
        carsWithSpecificManufacturerlistWidget->setObjectName("carsWithSpecificManufacturerlistWidget");

        verticalLayout->addWidget(carsWithSpecificManufacturerlistWidget);

        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        manufacturerlineEdit = new QLineEdit(widget);
        manufacturerlineEdit->setObjectName("manufacturerlineEdit");

        verticalLayout->addWidget(manufacturerlineEdit);

        showCarspushButton = new QPushButton(widget);
        showCarspushButton->setObjectName("showCarspushButton");

        verticalLayout->addWidget(showCarspushButton);

        PregatireOOPTest3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PregatireOOPTest3Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 314, 22));
        PregatireOOPTest3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PregatireOOPTest3Class);
        mainToolBar->setObjectName("mainToolBar");
        PregatireOOPTest3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PregatireOOPTest3Class);
        statusBar->setObjectName("statusBar");
        PregatireOOPTest3Class->setStatusBar(statusBar);

        retranslateUi(PregatireOOPTest3Class);
        QObject::connect(FontpushButton, SIGNAL(clicked()), PregatireOOPTest3Class, SLOT(ShowCarsWithFont()));
        QObject::connect(showCarspushButton, SIGNAL(clicked()), PregatireOOPTest3Class, SLOT(showCarsWithSpecificManufacturer()));

        QMetaObject::connectSlotsByName(PregatireOOPTest3Class);
    } // setupUi

    void retranslateUi(QMainWindow *PregatireOOPTest3Class)
    {
        PregatireOOPTest3Class->setWindowTitle(QCoreApplication::translate("PregatireOOPTest3Class", "PregatireOOPTest3", nullptr));
        FontpushButton->setText(QCoreApplication::translate("PregatireOOPTest3Class", "Show cars with Font", nullptr));
        label->setText(QCoreApplication::translate("PregatireOOPTest3Class", "Manufacturer:", nullptr));
        showCarspushButton->setText(QCoreApplication::translate("PregatireOOPTest3Class", "Show cars", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PregatireOOPTest3Class: public Ui_PregatireOOPTest3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREGATIREOOPTEST3_H
