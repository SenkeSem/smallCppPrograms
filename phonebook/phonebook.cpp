#include <iostream>
#include <cstring>

int main ()
{
	int i;
	char name[80];
	char phonebook[10][80] = {
		"Tom", "111-1234",
		"Andy", "222-1234",
		"John", "333-1234",
		"Mary", "444-1234",
		"Sam", "555-1234",
	};
	
	std::cout << "Enter name: ";
	std::cin >> name;
	
	for (i = 0; i < 10; i += 2) {
		if (!strcmp(name, phonebook[i])) {
			std::cout << name << "'s phone number: " << phonebook[i + 1] << std::endl;  
			break;
		}		
	}
	
	if (i == 10) std::cout << "Phone number not found" << std::endl;
	
	
	return 0;
}