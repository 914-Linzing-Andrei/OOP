#include "Repository.h"

void Repository::addAstronomer(Astronomer astronomer)
{
	auto it = find(astronomers.begin(), astronomers.end(), astronomer);

	if (it == astronomers.end()) {
		astronomers.push_back(astronomer);
	}
}

void Repository::addStar(Star star)
{
	auto it = find(stars.begin(), stars.end(), star);

	if (it == stars.end()) {
		stars.push_back(star);
	}
}
