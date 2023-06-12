#include "Subject.h"

void Subject::registerObserver(Observer* obs)
{
	observers.push_back(obs);
}

/*void Subject::unregisterObserver(Observer* obs)
{
	auto it = find(observers.begin(), observers.end(), obs);
	if (it != observers.end()) {
		observers.erase(it);
	}
}*/

void Subject::notify()
{
	for (auto obs : observers) {
		obs->update();
	}
}
