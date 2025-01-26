#include <iostream>

int main ()
{
	int i = 1;
	
	for (i; i<= 10000; i *= 2) {
		std::cout << i << std::endl;
	}
	
	return 0;
}