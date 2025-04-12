#include <iostream>

int summation(int nums[], int n);

int main()
{
	int vals[] = {1, 2, 3, 4, 5};
	int result;
	
	std::cout << "Sum: " << summation(vals, 5) << std::endl;
	
	return 0;
}

int summation(int nums[], int n)
{
	int sum = 0;
	int i;
	
	for(i = 0; i < n; i++) {
		sum += nums[i];
	}
	
	return sum;
}