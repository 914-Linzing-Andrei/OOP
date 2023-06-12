#pragma once

#include "Observer.h"
#include <vector>
#include <memory>

using namespace std;

class Subject {
	vector<Observer*> observers;
public:
	void registerObserver(Observer* obs);
	//void unregisterObserver(Observer* obs);
	void notify();
};