#include "Service.h"

Service::Service() {
	readUsersFromFile("C:\\Users\\Andrei\\Desktop\\OOP\\PracticeSoftwareApplication\\PracticeSoftwareApplication\\Users.txt");
}

void Service::readUsersFromFile(string filename)
{
	ifstream fin(filename);
	string line;
	while (getline(fin, line)) {
		stringstream ss(line);
		string name, type;
		getline(ss, name, '|');
		getline(ss, type, '|');
		this->addUserService(User(name, type));
	}
	fin.close();
}

void Service::writeIssuesToFile(string filename)
{
	ofstream fout(filename);
	for (auto p : this->getAllIssuesService()) {
		fout << p.getDescription() << '|'
			<< p.getStatus() << '|'
			<< p.getReporter() << '|'
			<< p.getSolver() << '\n';
	}
	fout.close();
}

void Service::addUserService(User user)
{
	this->repo.addUser(user);
	notify();
}

void Service::addIssueService(Issue issue)
{
	this->repo.addIssue(issue);
	notify();
}

void Service::resolveIssueService(Issue issue)
{
	this->repo.updateIssue(issue);
	notify();
}

void Service::removeIssueService(Issue issue)
{
	this->repo.removeIssue(issue);
	notify();
}
