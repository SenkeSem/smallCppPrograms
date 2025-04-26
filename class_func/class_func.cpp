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

int main()
{
	Vehicle minivan(7, 16, 21);
	Vehicle sportcar(2, 14, 12);
	
	int range1, range2;
	
	range1 = minivan.range();
	range2 = sportcar.range();
	
	std::cout << "The van can drive "
	<< minivan.get_passengers()
	<< " passengers over a distance of "
	<< range1
	<< " miles" << std::endl;
	
	std::cout << "The sportcar can drive "
	<< sportcar.get_passengers()
	<< " passengers over a distance of "
	<< range2
	<< " miles" << std::endl;
	
	return 0;
}