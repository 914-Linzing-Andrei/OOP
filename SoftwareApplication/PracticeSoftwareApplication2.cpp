#include "PracticeSoftwareApplication2.h"
#include <qmessagebox.h>
#include <algorithm>
#include <QModelIndexList>

PracticeSoftwareApplication2::PracticeSoftwareApplication2(Service& service, QWidget* parent)
    : QMainWindow(parent), service{ service }
{
    ui.setupUi(this);
}

PracticeSoftwareApplication2::~PracticeSoftwareApplication2()
{}

void PracticeSoftwareApplication2::addIssue() {
    string text = ui.issuelineEdit->text().toStdString();
    string title = this->windowTitle().toStdString();
    if (title.find("Programmer") != -1) {
        QMessageBox::critical(this, "Error!", "Only testers can add issues!", NULL);
    }
    else if (text == "") {
        QMessageBox::critical(this, "Error!", "Please enter something!", NULL);
    }
    else {
        vector<Issue> issues = service.getAllIssuesService();
        auto it = std::find_if(issues.begin(), issues.end(), [&](Issue issue) {
            return issue.getDescription() == text;
            });
        if (it == issues.end()) {
            this->service.addIssueService(Issue(text, "open", this->windowTitle().toStdString(), ""));
            this->service.writeIssuesToFile("C:\\Users\\Andrei\\Desktop\\OOP\\PracticeSoftwareApplication\\PracticeSoftwareApplication\\Issues.txt");
        }
        else {
            QMessageBox::critical(this, "Error!", "Issue already exists!", NULL);
        }
    }
    this->ui.issuelineEdit->clear();
}

void PracticeSoftwareApplication2::update()
{
    this->ui.appslistWidget->clear();
    vector<Issue> issues = this->service.getAllIssuesService();

    sort(issues.begin(), issues.end(), [](Issue i1, Issue i2) {
        if (i1.getStatus() != i2.getStatus())
            return i1.getStatus() > i2.getStatus();
        else {
            return i1.getDescription() < i2.getDescription();
        }
        });

    for (auto info : issues) {
        this->ui.appslistWidget->addItem(QString::fromStdString(info.getDescription())
            + "|" + QString::fromStdString(info.getStatus())
            + "|" + QString::fromStdString(info.getReporter())
            + "|" + QString::fromStdString(info.getSolver())
            + '\n');
    }
}

int PracticeSoftwareApplication2::getSelectedIndexFromAppsList()
{
    QModelIndexList indexList = this->ui.appslistWidget->selectionModel()->selectedIndexes();

    return (indexList.count() > 0) ? indexList[0].row() : -1;
}

void PracticeSoftwareApplication2::resolveIssue()
{
    if (this->windowTitle().toStdString().find("Programmer") == -1) {
        QMessageBox::critical(this, "Error", "Only programmers can resolve issues!");
        return;
    }
    else {
        int selectedIndex = getSelectedIndexFromAppsList();

        if (selectedIndex == -1) {
            QMessageBox::critical(this, "Error", "No app selected!");
            return;
        }

        string text = this->ui.appslistWidget->currentItem()->text().toStdString();

        stringstream ss(text);
        string description, status, reporter, solver;
        getline(ss, description, '|');
        getline(ss, status, '|');
        getline(ss, reporter, '|');
        getline(ss, solver);

        if (status == "closed") {
            QMessageBox::critical(this, "Error", "Issue already closed!");
            return;
        }
        else {
            string name_solver = this->windowTitle().toStdString();
            service.resolveIssueService(Issue(description, "closed", reporter,
                name_solver.substr(0, name_solver.find("-"))));
            this->service.writeIssuesToFile("C:\\Users\\Andrei\\Desktop\\OOP\\PracticeSoftwareApplication\\PracticeSoftwareApplication\\Issues.txt");
        }
    }
}

void PracticeSoftwareApplication2::removeIssue()
{
    string text = this->ui.appslistWidget->currentItem()->text().toStdString();

    stringstream ss(text);
    string description, status, reporter, solver;
    getline(ss, description, '|');
    getline(ss, status, '|');
    getline(ss, reporter, '|');
    getline(ss, solver);
    
    if (status == "closed") {
        this->service.removeIssueService(Issue(description, status, reporter, solver));
    }
    else {
        QMessageBox::critical(this, "Error", "Issue still open!");
    }
}
