#include <iostream>

int running_avg(int i);

int main()
{
	int num;
	
	do {
		std::cout << "Enter numbers (-1 to exit)" << std::endl;
		std::cin >> num;
		
		if(num != -1) {
			std::cout << "Current average number: " << running_avg(num) << std::endl;
		}
		
		std::cout << "\n";
	} while (num > -1);
	
	return 0;
}

int running_avg(int i)
{
	static int sum, current;
	
	sum += i;
	current++;
	
	return sum / current;
}