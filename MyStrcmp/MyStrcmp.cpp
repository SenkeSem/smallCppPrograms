#include <iostream>
#include <cctype>

int main ()
{	
	char string1[80], string2[80];
	char *p1, *p2;
	
	std::cout << "Enter first string: ";
	std::cin >> string1;

	std::cout << "Enter second string: ";
	std::cin >> string2;
	
	p1 = string1;
	p2 = string2;
		
	while (*p1 && *p2) {
		if (tolower(*p1) != tolower(*p2)) break;
		else {
			p1++;
			p2++;
		}
	}
	
	if (!*p1 && !*p2) {
		std::cout << "The Strings match. Case is ignored." << std::endl;
	} else {
		std::cout << "The Strings don't match" << std::endl;
	}
	
	
	return 0;
}