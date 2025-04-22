#include <iostream>

class Vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;
	
	int range();
};

int Vehicle::range()
{
	return mpg * fuelcap;
}

int main()
{
	Vehicle minivan;
	Vehicle sportcar;
	int range1, range2;
	
	minivan.passengers = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;
	
	sportcar.passengers = 2;
	sportcar.fuelcap = 14;
	sportcar.mpg = 12;
	
	range1 = minivan.range();
	range2 = sportcar.range();
	
	std::cout << "The van can drive "
	<< minivan.passengers
	<< " passengers over a distance of "
	<< range1
	<< " miles" << std::endl;
	
	std::cout << "The sportcar can drive "
	<< sportcar.passengers
	<< " passengers over a distance of "
	<< range2
	<< " miles" << std::endl;
	
	return 0;
}