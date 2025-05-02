#include <iostream>

class ThreeD {
	int x, y, z;
public:
	ThreeD() { x = y = z = 0; }
	ThreeD(int a, int b, int c) { x = a; y = b; z = c;}
	
	ThreeD operator++ ();
	ThreeD operator++ (int notused);
	
	void show();
};

ThreeD ThreeD::operator++ ()
{
	// ++obj	prefix increment
	x++;
	y++;
	z++;
	return *this;
}

ThreeD ThreeD::operator++ (int notused)
{
	// obj++	postfix increment
	ThreeD temp = *this; // save the original value 
	
	x++;
	y++;
	z++;
	return temp; // Return to the original value
}

void ThreeD::show()
{
	std::cout << "x: " << x;
	std::cout << " y: " << y;
	std::cout << " z: " << z << std::endl;
}

int main()
{
	ThreeD a(1, 2, 3);
	ThreeD b;
	
	std::cout << "The original value a: ";
	a.show();
	std::cout << "\n";
	
	++a;
	std::cout << "Value a after ++a: ";
	a.show();
	
	a++;
	std::cout << "Value a after a++: ";
	a.show();
	std::cout << "\n";
	
	b = ++a;
	std::cout << "Value a after b = ++a: ";
	a.show();
	std::cout << "Value b after b = ++a: ";
	b.show();
	std::cout << "\n";
	
	b = a++;
	std::cout << "Value a after b = a++: ";
	a.show();
	std::cout << "Value b after b = a++: ";
	b.show();
	
	
	return 0;
}