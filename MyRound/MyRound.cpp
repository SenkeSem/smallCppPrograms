#include <iostream>
#include <cmath>

int main()
{
	double num, fractpart, intpart;
	
	std::cout << "Enter a floating point number: ";
	std::cin >> num;
	
	fractpart = modf(num, &intpart);
	
	if (fractpart >= 0.5) intpart++;
	std::cout << "Rounded number: " << intpart;
	
	return 0;
}
