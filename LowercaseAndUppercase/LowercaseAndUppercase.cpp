#include <iostream>

int main ()
{
	int counter = 0;
	char ascii;
	
	std::cout << "Enter a point to end the program." << std::endl;
	
	do {
		std::cout << "Enter a character: ";
		std::cin >> ascii;
		
		if (ascii >= 'a' && ascii <= 'z') {
			ascii -= (char) 32;
			counter++;
		} else if (ascii >= 'A' && ascii <= 'Z') {
			ascii += (char) 32;
			counter++;

		}
		
		std::cout << "Inverted character: " << ascii << std::endl;		
			
	} while (ascii != '.');
	
	std::cout << "Counter: " << counter << std::endl;
		
	return 0;
	
}