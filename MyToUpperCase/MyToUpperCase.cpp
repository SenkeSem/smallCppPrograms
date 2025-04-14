#include <iostream>

int main()
{
	int i;
	char ch;
	
	for(i = 0; i < 10; i++) {
		ch = 'a' + i;
		std::cout << ch;
		
		ch = ch & 223;
		std::cout << ch << " ";
	}
	
	std::cout << "\n";
	
	return 0;
}