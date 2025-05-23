#include <iostream>

template <class X> void swapargs(X &a, X &b)
{
	X temp;
	
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int i = 10, j = 20;
	float x = 10.1, y = 23.3;
	char a = 'x', b = 'y';
	
	std::cout << "\n";
	std::cout << "Before i j: " << i << " " << j << std::endl;
	std::cout << "Before x y: " << x << " " << y << std::endl;
	std::cout << "Before a b: " << a << " " << b << std::endl;
	std::cout << "\n";
	
	swapargs(i, j);
	swapargs(x, y);
	swapargs(a, b);

	std::cout << "After i j: " << i << " " << j << std::endl;
	std::cout << "After x y: " << x << " " << y << std::endl;
	std::cout << "After a b: " << a << " " << b << std::endl;
	
	return 0;
}