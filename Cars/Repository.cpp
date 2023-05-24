#include "Repository.h"

void Repository::addCar(Car car)
{
	auto it = find(cars.begin(), cars.end(), car);
	if (it == cars.end()) {
		cars.push_back(car);
	}
	else 
		throw exception();
}

vector<Car> Repository::getCars() {
	return this->cars;
}
