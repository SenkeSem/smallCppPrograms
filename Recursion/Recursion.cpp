#include <iostream>

int factr(int num);
int fact(int num);

int main()
{
	int target;
	
	std::cout << "Enter number: ";
	std::cin >> target;
	
	std::cout << target <<"! = " << factr(target) << std::endl;
	std::cout << target <<"! = " << fact(target) << std::endl;
	
	return 0;
}

int factr (int num)
{
	int answer;
	
	if (num == 1) return(1);
	answer = factr(num - 1) * num;
	
	return answer;
}

int fact (int num)
{
	int k;
	int answer = 1;
	
	for (k = 1; k <= num; k++) {
		answer = answer * k;
	}
	
	return answer;
}