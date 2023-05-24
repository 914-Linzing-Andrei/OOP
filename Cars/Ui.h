#pragma once

#include "Service.h"
#include <iostream>

using namespace std;

class Ui {
private:
	Service ui;
	string inputManufacturer();
	string inputModel();
	int inputYear();
	string inputColour();
	Car createCar();
	void addUi();
	void showAll();
	
public:
	void start();
};