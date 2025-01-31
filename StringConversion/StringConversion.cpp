#include <iostream>
#include <cctype>

int main ()
{
	char *p;
	char str[80] = "TeSt sTrIng";
	
	p = str;
	
	std::cout << str << std::endl;
	
	while (*p) {
		if (isupper(*p)) {
			*p = tolower(*p);
		} else if (islower(*p)) {
			*p = toupper(*p);
		}
		p++;
	}

	std::cout << str << std::endl;
	
	return 0;
}