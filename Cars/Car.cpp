#include "Car.h"

Car::Car()
{
	this->manufacturer = "";
	this->model = "";
	this->year = 0;
	this->colour = "";
}

Car::Car(string manufacturer, string model, int year, string colour)
{
	this->manufacturer = manufacturer;
	this->model = model;
	this->year = year;
	this->colour = colour;
}

string Car::getManufacturer()
{
	return this->manufacturer;
}

string Car::getModel()
{
	return this->model;
}

int Car::getYear() {
	return this->year;
}

string Car::getColour() {
	return this->colour;
}

bool Car::operator==(Car otherCar) {
	return this->model == otherCar.getModel() && this->manufacturer == otherCar.getManufacturer() &&
		this->year == otherCar.getYear() && this->colour == otherCar.getColour();
}

string Car::toString1()
{
	return this->manufacturer + " | " + this->model + " | " + to_string(this->year) + " | " + this->colour;
}
