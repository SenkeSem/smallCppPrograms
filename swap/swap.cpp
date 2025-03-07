#include <iostream>

void swap(int *i, int *j);

int main()
{
	int i = 10;
	int j = 20;
	
	std::cout << "before swap: " << i << " " << j << std::endl;
	
	swap(&i,&j);
	
	std::cout << "after swap: " << i << " " << j << std::endl;

	return 0;	
}

void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}