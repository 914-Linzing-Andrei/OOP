#pragma once

#include "Star.h"
#include "Astronomer.h"
#include <vector>

class Repository {
	vector<Astronomer> astronomers;
	vector<Star> stars;
public:
	void addAstronomer(Astronomer astronomer);
	void addStar(Star star);
	
	vector<Star> getStars() { return this->stars; }
	vector<Astronomer> getAstronomers() { return this->astronomers; }
};