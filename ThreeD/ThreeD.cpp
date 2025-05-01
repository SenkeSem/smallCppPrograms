#include <iostream>

class ThreeD {
	int x, y, z;
public:
	ThreeD() { x = y = z = 0; }
	ThreeD(int a, int b, int c) { x = a; y = b; z = c;}
	
	ThreeD operator+ (ThreeD obj);
	ThreeD operator= (ThreeD obj);
	
	void show();
};

ThreeD ThreeD::operator+ (ThreeD obj)
{
	ThreeD newObj;
	
	newObj.x = x + obj.x;
	newObj.y = y + obj.y;
	newObj.z = z + obj.z;
	
	return newObj;
}

ThreeD ThreeD::operator= (ThreeD obj)
{
	x = obj.x;
	y = obj.y;
	z = obj.z;
	
	return *this;
}

void ThreeD::show()
{
	std::cout << "x: " << x;
	std::cout << " y: " << y;
	std::cout << " z: " << z << std::endl;
}

int main()
{
	ThreeD a(1, 2, 3), b(10, 10, 10), c;
	
	std::cout << "Value a: ";
	a.show();
	std::cout << "Value b: ";
	b.show();
	std::cout << "Value c: ";
	c.show();
	std::cout << "\n";
	
	c = a + b;
	std::cout << "Value c after c = a + b: ";
	c.show();
	
	c = a + b + c;
	std::cout << "Value c after c = a + b + c: ";
	c.show();
	
	c = b = a;
	std::cout << "Value b after c = b = a: ";
	b.show();
	std::cout << "Value c after c = b = a: ";
	c.show();

	
	return 0;
}