#include <iostream>
#include <cmath>

double hypot(double x, double y);

int main()
{
	double x, y;
	
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std:: cin >> y;
	
	std::cout << "Hypotenuse: " << hypot(x, y) << std::endl;
	
	return 0;
}

double hypot(double x, double y)
{
	return sqrt(x*x + y*y);
}