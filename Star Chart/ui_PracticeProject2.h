/********************************************************************************
** Form generated from reading UI file 'PracticeProject2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTICEPROJECT2_H
#define UI_PRACTICEPROJECT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PracticeProject2Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableView *starstableView;
    QPushButton *viewStarpushButton;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QPushButton *addStarpushButton;
    QLineEdit *addStarlineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PracticeProject2Class)
    {
        if (PracticeProject2Class->objectName().isEmpty())
            PracticeProject2Class->setObjectName("PracticeProject2Class");
        PracticeProject2Class->resize(600, 400);
        centralWidget = new QWidget(PracticeProject2Class);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        starstableView = new QTableView(centralWidget);
        starstableView->setObjectName("starstableView");

        verticalLayout->addWidget(starstableView);

        viewStarpushButton = new QPushButton(centralWidget);
        viewStarpushButton->setObjectName("viewStarpushButton");

        verticalLayout->addWidget(viewStarpushButton);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        addStarpushButton = new QPushButton(centralWidget);
        addStarpushButton->setObjectName("addStarpushButton");

        verticalLayout->addWidget(addStarpushButton);

        addStarlineEdit = new QLineEdit(centralWidget);
        addStarlineEdit->setObjectName("addStarlineEdit");

        verticalLayout->addWidget(addStarlineEdit);

        PracticeProject2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PracticeProject2Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        PracticeProject2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PracticeProject2Class);
        mainToolBar->setObjectName("mainToolBar");
        PracticeProject2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PracticeProject2Class);
        statusBar->setObjectName("statusBar");
        PracticeProject2Class->setStatusBar(statusBar);

        retranslateUi(PracticeProject2Class);
        QObject::connect(checkBox, SIGNAL(stateChanged(int)), PracticeProject2Class, SLOT(starsCheckBox()));
        QObject::connect(addStarpushButton, SIGNAL(clicked()), PracticeProject2Class, SLOT(addStar()));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), PracticeProject2Class, SLOT(onTheGo()));
        QObject::connect(viewStarpushButton, SIGNAL(clicked()), PracticeProject2Class, SLOT(viewStar()));

        QMetaObject::connectSlotsByName(PracticeProject2Class);
    } // setupUi

    void retranslateUi(QMainWindow *PracticeProject2Class)
    {
        PracticeProject2Class->setWindowTitle(QCoreApplication::translate("PracticeProject2Class", "PracticeProject2", nullptr));
        viewStarpushButton->setText(QCoreApplication::translate("PracticeProject2Class", "View", nullptr));
        checkBox->setText(QCoreApplication::translate("PracticeProject2Class", "CheckBox", nullptr));
        addStarpushButton->setText(QCoreApplication::translate("PracticeProject2Class", "Add Star", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PracticeProject2Class: public Ui_PracticeProject2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTICEPROJECT2_H
