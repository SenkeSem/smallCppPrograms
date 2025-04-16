#include <iostream>
#include <cstring>

int main()
{
	char str[] = "This is a test";
	char key = 88;
	
	std::cout << "The original string: " << str << std::endl;
	
	for(int i = 0; i < strlen(str); i++) {
		str[i] = str[i] ^ key;
	}
	
	std::cout << "The encrypted string: " << str << std::endl;
	
	for(int i = 0; i < strlen(str); i++) {
		str[i] = str[i] ^ key;
	}
	
	std::cout << "The decrypted string: " << str << std::endl;
	
	return 0;
}