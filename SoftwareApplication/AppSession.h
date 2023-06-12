#pragma once

#include "Service.h"
#include "Subject.h"

class AppSession : public Subject {
	vector<Issue> issues;
public:
	void addIssue(Issue issue);
	vector<Issue> getIssues() { return this->issues; }
};