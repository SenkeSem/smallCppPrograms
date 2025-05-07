#include <iostream>
#include <cstring>

class TwoDShape {
public:
	double width;
	double height;
	
	void showDim() {
		std::cout
		<< "Width and height: " << width
		<< " " << height << std::endl;
	}
};

class Triangle : public TwoDShape {
public:
	char style[20];
	
	double area() {
		return width * height / 2;
	}
	
	void showStyle() {
		std::cout << "Triangle " << style << std::endl;
	}
};

int main()
{
	Triangle t1;
	Triangle t2;
	
	t1.width = 4.0;
	t1.height = 4.0;
	strcpy(t1.style, "isosceles");
	
	t2.width = 8.0;
	t2.height = 12.0;
	strcpy(t2.style, "right");
	
	std::cout << "t1 data: \n";
	t1.showDim();
	t1.showStyle();
	std::cout << "The area is equal to " << t1.area() << std::endl;
	std::cout << "\n";
	
	std::cout << "t2 data: \n";
	t2.showDim();
	t2.showStyle();
	std::cout << "The area is equal to " << t2.area() << std::endl;
	
	return 0;
}