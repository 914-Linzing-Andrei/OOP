#pragma once

#include "Car.h"

#include <vector>
#include <algorithm>

class Repository {
private:
	vector<Car> cars;
public:
	void addCar(Car car);
	vector<Car> getCars();
};