// Реализация операции XOR с помощью логических операторов 

#include <iostream>
using namespace std;

int main ()
{
	bool a, b, c;
	a = true;
	b = true;
	
	c = (a || b) && !(a && b);
	cout << a << " XOR " << b << " is " << c;
	cout << "\n";

	a = true;
	b = false;

	c = (a || b) && !(a && b);
	cout << a << " XOR " << b << " is " << c;
	cout << "\n";

	a = false;
	b = true;

	c = (a || b) && !(a && b);
	cout << a << " XOR " << b << " is " << c;
	cout << "\n";

	a = false;
	b = false;

	c = (a || b) && !(a && b);
	cout << a << " XOR " << b << " is " << c;
	cout << "\n";

	return 0;	


}
