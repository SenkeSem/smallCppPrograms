#include <iostream>

char *get_substr(char *sub, char *str);

int main()
{
	char *substr;
	char str[] = "one two three four five six seven";
	char sub[] = "three";
	
	substr = get_substr(sub, str);
	
	std::cout << "Substring found: " << substr;
	
	return 0;
}

char *get_substr(char *sub, char *str)
{
	int t;
	char *p, *p2, *start;
	
	for (t = 0; str[t]; t++) {
		p = &str[t];
		start = p;
		p2 = sub;
		
		while (*p2 && *p2 == *p) {
			p++;
			p2++;
		}
		
		if (!*p2) return start;
		
	}
	
	return 0;
}