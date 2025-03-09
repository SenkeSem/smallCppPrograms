#include <iostream>

void f(int &i);

int main()
{
	int val = 1;
	
	std::cout << "Before passing: " << val << std::endl;
	f(val);
	std::cout << "After passing: " << val << std::endl;
	
	return 0;
}

void f(int &i)
{
	i = 10;
}