#include <iostream>

void plusplus(int i);

int main()
{
	plusplus(10);
	
	return 0;
}

void plusplus(int i)
{	
	if (i > 1) plusplus(i - 1);
	
	std::cout << i << " ";
}