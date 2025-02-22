#include <iostream>
#include <cctype>

int main ()
{
	char *ptr;
	char str[80];
	int counter = 0;
	
	std::cout << "Enter string: ";
	std::cin >> str;
	
	ptr = str;
	
	while (*ptr) {
		if (islower(*ptr)) {
			counter++;
		}
		
		ptr++;
	}
	
	std::cout << "String include " << counter << " lower char!" << std::endl;
	
	return 0;
}
