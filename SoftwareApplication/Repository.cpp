#include "Repository.h"

void Repository::addUser(User user)
{
	users.push_back(user);
}

void Repository::addIssue(Issue issue)
{
	issues.push_back(issue);
}

void Repository::updateIssue(Issue issue)
{
	auto it = find(issues.begin(), issues.end(), issue);

	if (it != issues.end()) {
		issues[it - issues.begin()] = issue;
	}
}

void Repository::removeIssue(Issue issue)
{
	auto it = find(issues.begin(), issues.end(), issue);
	if (it != issues.end()) {
		issues.erase(it);
	}
}
