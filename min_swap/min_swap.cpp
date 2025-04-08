#include <iostream>
 
int min_swap(int &i, int &j);

int main()
{
	int i = 117;
	int j = 29;
	int min;
	
	std::cout << "before swap: " << i << " " << j << std::endl;
	min = min_swap(i,j);
	
	std::cout << "after swap: " << i << " " << j << std::endl;
	std::cout << "min value: " << min << std::endl;
	
	return 0;	
}

int min_swap(int &x, int &y)
{
	int temp;
	
	temp = x;
	x = y;
	y = temp;
	
	if(x > y) return y;
	return x;
}