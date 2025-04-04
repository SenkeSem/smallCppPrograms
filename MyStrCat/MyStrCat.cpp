#include <iostream>
#include <cstring>

void mystrcat(char *s1, char *s2, int len = 0);

int main()
{
	char str1[80] = "example";
	char str2[80] = "0123456789";
	
	mystrcat(str1, str2, 3);
	std::cout << str1 << std::endl;
	
	strcpy(str1, "example");
	
	mystrcat(str1, str2);
	std::cout << str1 << std::endl;
	
	return 0;
}

void mystrcat(char *s1, char *s2, int len)
{
	while(*s1) s1++;
	
	if(len == 0) len = strlen(s2);
	
	while(*s2 && len) {
		*s1 = *s2;
		s1++;
		s2++;
		len--;
	}
	
	*s1 = '\0';
}
