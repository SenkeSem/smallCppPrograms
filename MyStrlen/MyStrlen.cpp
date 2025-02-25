#include <iostream>

int main ()
{
	char *ptr;
	char str[80];
	int len = 0;
	
	std::cout << "Enter string: ";
	std::cin >> str;
	ptr = str;

	while(*ptr) {
		len++;
		ptr++;
	}
	
	std::cout << "Length string: " << len << std::endl;
	
	return 0;
}
