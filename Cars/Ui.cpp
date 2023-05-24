#include "Ui.h"

string Ui::inputManufacturer() {
	string manufacturer;
	cout << "Manufacturer:\n";
	cin >> manufacturer;
	return manufacturer;
}

string Ui::inputModel() {
	string model;
	cout << "Model:\n";
	cin >> model;
	return model;
}

int Ui::inputYear() {
	int year;
	cout << "Year:\n";
	cin >> year;
	return year;
}

string Ui::inputColour() {
	string colour;
	cout << "Colour:\n";
	cin >> colour;
	return colour;
}

Car Ui::createCar() {
	string manufacturer, model, colour;
	int year;

	manufacturer = inputManufacturer();
	model = inputModel();
	year = inputYear();
	colour = inputColour();

	Car car;
	car = Car(manufacturer, model, year, colour);
	return car;
}

void Ui::addUi() {
	Car car;
	car = createCar();
	ui.add(car);
}

void Ui::showAll() {
	for (auto p : ui.showAll()) {
		cout << p.toString1() << '\n';
	}
}

void Ui::start() {
	int option;
	while (true) {
		cout << "1. Add\n2. Show all\n3. Exit\n";
		cin >> option;
		switch (option) {
		case 1:
			addUi();
			break;
		case 2:
			showAll();
			break;
		case 3:
			return;
		}
	}
}