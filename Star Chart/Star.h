#pragma once

#include <string>

using namespace std;

class Star {
	string name;
	string constellation;
	int RA, Dec;
	int diameter;
public:
	Star() { this->name = "", this->constellation = "", this->RA = 0, this->Dec = 0, this->diameter = 0; }
	Star(string newName, string newConstellation, int newRA, int newDec, int newDiameter) {
		this->name = newName;
		this->constellation = newConstellation;
		this->RA = newRA;
		this->Dec = newDec;
		this->diameter = newDiameter;
	}

	string getName() { return this->name; }
	string getConstelation() { return this->constellation; }
	int getRA() { return this->RA; }
	int getDec() { return this->Dec; }
	int getDiamenter() { return this->diameter; }

	bool operator==(const Star otherStar) { return this->name == otherStar.name; }
};