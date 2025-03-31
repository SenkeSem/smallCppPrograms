#include <iostream>

double &change_it(int i);

double vals[] = {1.1, 2.2, 3.3, 4.4, 5.5};

int main()
{
	int i;
	
	for(i = 0; i < 5; i++) {
		std::cout << vals[i] << " ";
	}
	std::cout << "\n";
	
	change_it(1) = 124.42;
	change_it(3) = 74.37;
	
	for(i = 0; i < 5; i++) {
		std::cout << vals[i] << " ";
	}
	std::cout << "\n";
	
	return 0;
}

double &change_it(int i) {
	// Return a reference to the i-element
	
	return vals[i]; 
}