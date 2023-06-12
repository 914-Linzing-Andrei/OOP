/********************************************************************************
** Form generated from reading UI file 'PracticeProject1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTICEPROJECT1_H
#define UI_PRACTICEPROJECT1_H

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

class Ui_PracticeProject1Class
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

    void setupUi(QMainWindow *PracticeProject1Class)
    {
        if (PracticeProject1Class->objectName().isEmpty())
            PracticeProject1Class->setObjectName("PracticeProject1Class");
        PracticeProject1Class->resize(600, 400);
        centralWidget = new QWidget(PracticeProject1Class);
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

        PracticeProject1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PracticeProject1Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        PracticeProject1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PracticeProject1Class);
        mainToolBar->setObjectName("mainToolBar");
        PracticeProject1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PracticeProject1Class);
        statusBar->setObjectName("statusBar");
        PracticeProject1Class->setStatusBar(statusBar);

        retranslateUi(PracticeProject1Class);
        QObject::connect(addIssuepushButton, SIGNAL(clicked()), PracticeProject1Class, SLOT(addIssue()));
        QObject::connect(removeIssuepushButton, SIGNAL(clicked()), PracticeProject1Class, SLOT(removeIssue()));
        QObject::connect(resolveIssuepushButton, SIGNAL(clicked()), PracticeProject1Class, SLOT(resolveIssue()));

        QMetaObject::connectSlotsByName(PracticeProject1Class);
    } // setupUi

    void retranslateUi(QMainWindow *PracticeProject1Class)
    {
        PracticeProject1Class->setWindowTitle(QCoreApplication::translate("PracticeProject1Class", "PracticeProject1", nullptr));
        addIssuepushButton->setText(QCoreApplication::translate("PracticeProject1Class", "Add Issue", nullptr));
        removeIssuepushButton->setText(QCoreApplication::translate("PracticeProject1Class", "Remove Issue", nullptr));
        resolveIssuepushButton->setText(QCoreApplication::translate("PracticeProject1Class", "Resolve Issue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PracticeProject1Class: public Ui_PracticeProject1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTICEPROJECT1_H
