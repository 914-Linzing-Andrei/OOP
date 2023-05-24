#pragma once

#include "Repository.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

class Service {
private:
	Repository repo;
public:
	Service();
	void readFromFile(string filename);
	void writeToFile(string filename);
	void add(Car car);
	vector<Car> showAll();
};