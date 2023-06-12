#pragma once

#include <string>

using namespace std;

class User {
	string name;
	string type;
public:
	User() { this->name = "", this->type = ""; }
	User(string name, string type) { this->name = name, this->type = type; }

	string getName() { return this->name; }
	string getType() { return this->type; }
};