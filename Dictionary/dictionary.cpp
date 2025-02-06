#include <iostream>
#include <cstring>

int main ()
{
	
	const char *dictionary[][2] {
		"BMW", "Germany",
		"Reno", "France",
		"Belaz", "Belarus",
		"Lada", "Russia",
		"Toyota", "Japan",
		"Ford", "USA",
		"",""
	};
	char word[80];
	int i;
	
	std::cout << "Enter a word: ";
	std::cin >> word;
	
	for (i = 0; *dictionary[i][0]; i++) {	
		if (!strcmp(dictionary[i][0], word)) {
			std::cout << dictionary[i][1] << std::endl;
			break;
		}
	}
	
	if (!*dictionary[i][0]) {
		std::cout << "The word was not found" << std::endl;
	}
	
	return 0;
}