#include <iostream>

int main ()
{
	int nums[10];
	int a, b, t;
	int size = 10;
	
	for (t = 0; t < size; t++) nums[t] = rand();

	std::cout << "The original array:" << std::endl;
	for (t = 0; t < size; t++) std::cout << nums[t] << " ";
	std::cout << "\n";
	
	for (a = 1; a < size; a++) {
		for (b = size - 1; b >= a; b--) {
			if (nums[b - 1] > nums[b]) {
				t = nums [b - 1];
				nums[b - 1] = nums[b];
				nums[b] = t;
			}
		}
	}
	
	std::cout << "Sorted array: " << std::endl;
	for (t = 0; t < size; t++) std::cout << nums[t] << " ";
	std::cout << "\n";
	
	return 0;
}