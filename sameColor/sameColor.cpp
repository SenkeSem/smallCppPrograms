#include <iostream>

class Cylinder;

enum colors { red, green, yellow };

class Cube {
	colors color;
public:
	Cube(colors c) { color = c; }
	friend bool sameColor(Cube x, Cylinder y);
};

class Cylinder {
	colors color;
public:
	Cylinder(colors c) { color = c; }
	friend bool sameColor(Cube x, Cylinder y);
};

bool sameColor(Cube x, Cylinder y)
{
	if(x.color == y.color) return true;
	else return false;
}

int main()
{
	Cube cube1(red);
	Cube cube2(green);
	Cylinder cy1(green);
	
	if(sameColor(cube1, cy1)) std::cout << "cube1 and cy1 same color";
	else std::cout << "cube1 and cy1 not same color";
	
	std::cout << "\n";
	
	if(sameColor(cube2, cy1)) std::cout << "cube2 and cy1 same color";
	else std::cout << "cube2 and cy1 not same color";
	
	return 0;
}