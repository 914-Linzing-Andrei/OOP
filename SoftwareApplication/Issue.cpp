#include "Issue.h"

bool Issue::operator==(const Issue otherIssue)
{
    return this->description == otherIssue.description;
}
