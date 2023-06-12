#pragma once

#include "User.h"
#include "Issue.h"

#include <vector>

class Repository {
	vector<User> users;
	vector<Issue> issues;
public:
	void addUser(User user);
	void addIssue(Issue issue);
	void updateIssue(Issue issue);
	void removeIssue(Issue issue);

	vector<User> getUsers() { return this->users; }
	vector<Issue> getIssues() { return this->issues; }
};