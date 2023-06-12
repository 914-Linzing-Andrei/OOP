#pragma once

#include <string>

using namespace std;

class Issue{
	string description;
	string status;
	string reporter;
	string solver;
public:
	Issue() { this->description = "", this->status = "", this->reporter = "", this->solver = ""; }
	Issue(string description, string status, string reporter, string solver) {
		this->description = description;
		this->status = status;
		this->reporter = reporter;
		this->solver = solver;
	}

	string getDescription() { return this->description; }
	string getStatus() { return this->status; }
	string getReporter() { return this->reporter; }
	string getSolver() { return this->solver; }

	bool operator==(const Issue otherIssue);
};