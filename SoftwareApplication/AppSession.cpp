#include "AppSession.h"

void AppSession::addIssue(Issue issue)
{
	issues.push_back(issue);
	notify();
}