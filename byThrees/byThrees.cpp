#include <iostream>

int NUM = 0;
int byThrees();
void reset();

int main()
{
	int i;
	
	for (i = 0; i < 10; i++) {
		std::cout << byThrees() << " ";
	}
	
	std::cout << "\n";
	reset();
	
	for (i = 0; i < 10; i++) {
		std::cout << byThrees() << " ";
	}
	
	return 0;
}

int byThrees()
{
	int t;
	t = NUM;
	NUM += 3;
	return t;
}

void reset()
{
	NUM = 0;
}