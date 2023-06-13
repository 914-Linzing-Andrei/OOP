#pragma once

#include "Repository.h"
#include <fstream>
#include <sstream>

class Service {
	Repository repo;
	
public:
	void readAstronomerFromFile(string filename);
	void readStarFromFile(string filename);
	void writeToFile(string filename);

	Service();

	void addStar(Star star);

	vector<Star> getAllStars() { return this->repo.getStars(); }
	vector<Astronomer> getAllAstronomers() { return this->repo.getAstronomers(); }
};