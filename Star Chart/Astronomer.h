#pragma once

#include <string>

using namespace std;

class Astronomer {
	string name;
	string constellation;
public:
	Astronomer() { this->name = "", this->constellation = ""; }
	Astronomer(string newName, string newConstellation) {
		this->name = newName;
		this->constellation = newConstellation;
	}

	string getName() { return this->name; }
	string getConstellation() { return this->constellation; }

	bool operator==(const Astronomer otherAstronomer) { return this->name == otherAstronomer.name; }
};