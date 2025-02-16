#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
	double a, b;
	
	if (argc != 3) {
		std::cout << "Example: sum number number" << std::endl;
	}
	
	a = atof(argv[1]);
	
	b = atof(argv[2]);
	
	std::cout << a + b;
	
	return 0;
} 
