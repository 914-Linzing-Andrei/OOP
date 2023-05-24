#pragma once

#include <string>

using namespace std;

class Car {
private:
	string manufacturer;
	string model;
	int year;
	string colour;
public:
	Car();
	Car(string manufacturer, string model, int year, string colour);

	string getManufacturer();
	string getModel();
	int getYear();
	string getColour();

	bool operator==(Car otherCar);

	string toString1();
};