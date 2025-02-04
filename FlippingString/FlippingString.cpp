#include <iostream>
#include <cstring>

int main ()
{
	char str[80];
	char *start, *end;
	char t;
	int len;

	std::cout << "Enter the String: " << std::endl;
	std::cin >> str;

	len = strlen(str);
	start = str;
	end = &str[len-1];

	while (start < end) {
		t = *start;
		*start = *end;
		*end = t;

		start++;
		end--;
	}

	std::cout << str << std::endl;

	return 0;
}