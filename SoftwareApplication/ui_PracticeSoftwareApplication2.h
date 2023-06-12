/********************************************************************************
** Form generated from reading UI file 'PracticeSoftwareApplication2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTICESOFTWAREAPPLICATION2_H
#define UI_PRACTICESOFTWAREAPPLICATION2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_PracticeSoftwareApplication2Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *appslistWidget;
    QLineEdit *issuelineEdit;
    QPushButton *addIssuepushButton;
    QPushButton *removeIssuepushButton;
    QPushButton *resolveIssuepushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PracticeSoftwareApplication2Class)
    {
        if (PracticeSoftwareApplication2Class->objectName().isEmpty())
            PracticeSoftwareApplication2Class->setObjectName("PracticeSoftwareApplication2Class");
        PracticeSoftwareApplication2Class->resize(600, 400);
        centralWidget = new QWidget(PracticeSoftwareApplication2Class);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        appslistWidget = new QListWidget(centralWidget);
        appslistWidget->setObjectName("appslistWidget");

        verticalLayout->addWidget(appslistWidget);

        issuelineEdit = new QLineEdit(centralWidget);
        issuelineEdit->setObjectName("issuelineEdit");

        verticalLayout->addWidget(issuelineEdit);

        addIssuepushButton = new QPushButton(centralWidget);
        addIssuepushButton->setObjectName("addIssuepushButton");

        verticalLayout->addWidget(addIssuepushButton);

        removeIssuepushButton = new QPushButton(centralWidget);
        removeIssuepushButton->setObjectName("removeIssuepushButton");

        verticalLayout->addWidget(removeIssuepushButton);

        resolveIssuepushButton = new QPushButton(centralWidget);
        resolveIssuepushButton->setObjectName("resolveIssuepushButton");

        verticalLayout->addWidget(resolveIssuepushButton);

        PracticeSoftwareApplication2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PracticeSoftwareApplication2Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        PracticeSoftwareApplication2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PracticeSoftwareApplication2Class);
        mainToolBar->setObjectName("mainToolBar");
        PracticeSoftwareApplication2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PracticeSoftwareApplication2Class);
        statusBar->setObjectName("statusBar");
        PracticeSoftwareApplication2Class->setStatusBar(statusBar);

        retranslateUi(PracticeSoftwareApplication2Class);
        QObject::connect(addIssuepushButton, SIGNAL(clicked()), PracticeSoftwareApplication2Class, SLOT(addIssue()));
        QObject::connect(removeIssuepushButton, SIGNAL(clicked()), PracticeSoftwareApplication2Class, SLOT(removeIssue()));
        QObject::connect(resolveIssuepushButton, SIGNAL(clicked()), PracticeSoftwareApplication2Class, SLOT(resolveIssue()));

        QMetaObject::connectSlotsByName(PracticeSoftwareApplication2Class);
    } // setupUi

    void retranslateUi(QMainWindow *PracticeSoftwareApplication2Class)
    {
        PracticeSoftwareApplication2Class->setWindowTitle(QCoreApplication::translate("PracticeSoftwareApplication2Class", "PracticeSoftwareApplication2", nullptr));
        addIssuepushButton->setText(QCoreApplication::translate("PracticeSoftwareApplication2Class", "Add Issue", nullptr));
        removeIssuepushButton->setText(QCoreApplication::translate("PracticeSoftwareApplication2Class", "Remove Issue", nullptr));
        resolveIssuepushButton->setText(QCoreApplication::translate("PracticeSoftwareApplication2Class", "Resolve Issue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PracticeSoftwareApplication2Class: public Ui_PracticeSoftwareApplication2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTICESOFTWAREAPPLICATION2_H
