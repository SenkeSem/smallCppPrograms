#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
	if (argc != 2) {
		std::cout << "Okay, give me your password." << std::endl;
		std::cout << "Examle: password my_password_string" << std::endl;
	}
	
	if (!strcmp("Oral_cumshot",argv[1])) {
		std::cout << "Oral cumshot? Yeah, that fits." << std::endl;
	} else {
		std::cout << "This doesn't fit.";
	}
	
	return 0;
}