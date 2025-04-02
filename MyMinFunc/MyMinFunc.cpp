#include <iostream>

int min(int a, int b);
char min(char a, char b);
int *min(int *a, int *b);

int main()
{
	int i = 100, j = 37;
	
	std::cout << "min('w', 'y'): " << min('w' , 'y') << std::endl;
	std::cout << "min(11, 7): " << min(27 , 63) << std::endl;
	std::cout << "min(&i, &j): " << *min(&i, &j) << std::endl;
	
	return 0;
}

int min(int a, int b)
{
	if(a < b) return a;
	return b;
}

char min(char a, char b)
{
	if(tolower(a) < tolower(b)) return a;
	return b;
}

int *min(int *a, int *b)
{
	if(*a < *b) return a;
	return b;
}