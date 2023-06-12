#pragma once

#include "Repository.h"
#include <fstream>
#include <sstream>
#include "Subject.h"

class Service : public Subject {
	Repository repo;
public:
	Service();

	void readUsersFromFile(string filename);
	void writeIssuesToFile(string filename);
	
	void addUserService(User user);
	void addIssueService(Issue issue);
	void resolveIssueService(Issue issue);
	void removeIssueService(Issue issue);

	vector<User> getAllUsersService() { return this->repo.getUsers(); }
	vector<Issue> getAllIssuesService() { return this->repo.getIssues(); }
};