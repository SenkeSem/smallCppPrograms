#include <iostream>

class ThreeD {
	int x, y, z;
public:
	ThreeD() { x = y = z = 0; }
	ThreeD(int a, int b, int c) { x = a; y = b; z = c;}
	
	friend ThreeD operator+ (ThreeD op1, int op2);
	friend ThreeD operator+ (int op1, ThreeD op2);
	
	void show();
};

ThreeD operator+ (ThreeD op1, int op2)
{
	ThreeD newObj;
	
	newObj.x = op1.x + op2;
	newObj.y = op1.y + op2;
	newObj.z = op1.z + op2;
	
	return newObj;
}

ThreeD operator+ (int op1, ThreeD op2)
{
	ThreeD newObj;
	
	newObj.x = op1 + op2.x;
	newObj.y = op1 + op2.y;
	newObj.z = op1 + op2.z;
	
	return newObj;
}

void ThreeD::show()
{
	std::cout << "x: " << x;
	std::cout << " y: " << y;
	std::cout << " z: " << z << std::endl;
}

int main()
{
	ThreeD a(1, 2, 3), b;
	
	std::cout << "The original value a: ";
	a.show();
	
	b = a + 10;
	std::cout << "Value b after b = a + 10: ";
	b.show();
	
	b = 10 + a;
	std::cout << "Value b after b = 10 + a: ";
	b.show();
	
	return 0;
}