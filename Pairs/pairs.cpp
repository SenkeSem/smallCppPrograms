#include <iostream>

int main()
{
	int nums[] = {1,3,5,2,7,4,8,2,7,1};
	int i, j;
	
	for (i = 0; i < 10; i++) {
		for(j = i + 1; j < 10; j++) {
			if(nums[i] == nums[j]) {
				std::cout << "Pairs: " << nums[i] << " index = " << i << " and ";
				std::cout << nums[j] << " index = " << j << std::endl;
			}
		}
	}
	
	return 0;
}