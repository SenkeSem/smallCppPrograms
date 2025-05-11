#include <iostream>

class Vehicle {
	int passengers;
	int fuelcap;
	int mpg;
public:
	Vehicle(int p, int f, int m) {
		passengers = p;
		fuelcap = f;
		mpg = m;
	}
	
	int range() { return fuelcap * mpg; }
	int get_passengers() { return passengers; }
	int get_fuelcap() { return fuelcap; }
	int get_mpg() { return mpg; }
};

class Truck : public Vehicle {
	int cargocap;
public:
	Truck(int p, int f, int m, int c) : Vehicle(p, f, m) {
		cargocap = c;
	}
	
	int get_cargocap() { return cargocap; }
};

int main()
{
	Truck semi(2, 200, 7, 44000);
	Truck pickup(3, 28, 15, 2000);
	int dist = 252;
	
	std::cout << "Semi data:" << std::endl;
	std::cout << "Can carry " << semi.get_cargocap() << " pounds of cargo" << std::endl;
	std::cout << "Mileage range: " << semi.range() << std::endl;
	std::cout << "A " << dist << "-mile journey requires "
	<< dist / semi.get_mpg() << " gallons of fuel"
	<< std::endl;
	std::cout << "\n";
	
	std::cout << "pickup data:" << std::endl;
	std::cout << "Can carry " << pickup.get_cargocap() << " pounds of cargo" << std::endl;
	std::cout << "Mileage range: " << pickup.range() << std::endl;
	std::cout << "A " << dist << "-mile journey requires "
	<< dist / pickup.get_mpg() << " gallons of fuel"
	<< std::endl;
	std::cout << "\n";
	
	return 0;
}