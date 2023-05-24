#include "Service.h"

Service::Service() {
    readFromFile("C:\\Users\\Andrei\\Desktop\\PregatireOOPTest3\\PregatireOOPTest3\\Cars.txt");
}

void Service::readFromFile(string filename) {
    
    std::ifstream fin(filename);

    if (!fin) {
        std::cout << "Failed to open the file: " << filename << std::endl;
        return;
    }

    else {
        std::string line;
        Car car;

        while (std::getline(fin, line)) {
            std::stringstream ss(line);
            std::string manufacturer, model, year, colour;

            std::getline(ss, manufacturer, '|');
            std::getline(ss, model, '|');
            std::getline(ss, year, '|');
            std::getline(ss, colour);

            int year_good = atoi(year.c_str());
            car = Car(manufacturer, model, year_good, colour);

            this->add(car);
        }

        fin.close();
    }
}

void Service::writeToFile(string filename) {
    std::ofstream fout(filename);

    for (auto p : repo.getCars()) {
        fout << p.getManufacturer() << "|" << p.getModel() << "|" << p.getYear() << "|" << p.getColour() << '\n';
    }

    fout.close();
}

void Service::add(Car car)
{
	repo.addCar(car);
}

vector<Car> Service::showAll()
{
	vector<Car> carsToShow;
	for (auto p : repo.getCars()) {
		carsToShow.push_back(p);
	}
	return carsToShow;
}