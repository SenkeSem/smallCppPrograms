#include <iostream>

class Vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;
};

int main()
{
	Vehicle minivan;
	int range;
	
	minivan.passengers = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;
	
	range = minivan.fuelcap * minivan.mpg;
	
	std::cout << "The van can drive "
	<< minivan.passengers
	<< " passengers over a distance of "
	<< range
	<< " miles" << std::endl;
	
	return 0;
}