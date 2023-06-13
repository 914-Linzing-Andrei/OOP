#include "Service.h"
#include <algorithm>


Service::Service()
{
	this->readAstronomerFromFile("C:\\Users\\Andrei\\Desktop\\OOP\\PracticeProject2\\PracticeProject2\\Astronomers.txt");
	this->readStarFromFile("C:\\Users\\Andrei\\Desktop\\OOP\\PracticeProject2\\PracticeProject2\\Stars.txt");
}

void Service::addStar(Star star)
{
	this->repo.addStar(star);
}

void Service::readAstronomerFromFile(string filename) {
	ifstream fin(filename);
	string line;
	while (getline(fin, line)) {
		stringstream ss(line);
		string name, constellation;


		getline(ss, name, '|');
		getline(ss, constellation);

		this->repo.addAstronomer(Astronomer(name, constellation));
	}
	fin.close();
}

void Service::readStarFromFile(string filename)
{
	ifstream fin(filename);
	string line;
	while (getline(fin, line)) {
		stringstream ss(line);
		string name, constellation, RA_s, Dec_s, Diameter_s;
		

		getline(ss, name, '|');
		getline(ss, constellation, '|');
		getline(ss, RA_s, '|');
		getline(ss, Dec_s, '|');
		getline(ss, Diameter_s);

		int RA = atoi(RA_s.c_str()), Dec = atoi(Dec_s.c_str());
		int diameter = atoi(Diameter_s.c_str());

		this->repo.addStar(Star(name, constellation, RA, Dec, diameter));
	}
	fin.close();
}

void Service::writeToFile(string filename)
{
	ofstream fout(filename);
	vector<Star> stars = getAllStars();
	sort(stars.begin(), stars.end(), [](Star s1, Star s2) {
		return s1.getConstelation() < s2.getConstelation();
		}
	);
	for (auto p : stars) {
		fout << p.getName() << '|' << p.getConstelation() << '|' << to_string(p.getRA()) << '|' << to_string(p.getDec())
			<< '|' << p.getDiamenter() << '\n';
	}
	fout.close();
}
