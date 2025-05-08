#include <iostream>
#include <cstring>

class TwoDShape {
	double width;
	double height;	
public:
	void showDim() {
		std::cout
		<< "Width and height: " << width
		<< " " << height << std::endl;
	}
	
	double getWidth() { return width; }
	double getHeight() { return height; }
	void setWidth(double w) { width = w; }
	void setHeight(double h) { height = h; }
};

class Triangle : public TwoDShape {
public:
	char style[20];
	
	double area() {
		return getWidth() * getHeight() / 2;
	}
	
	void showStyle() {
		std::cout << "Triangle " << style << std::endl;
	}
};

int main()
{
	Triangle t1;
	Triangle t2;
	
	t1.setWidth(4.3);
	t1.setHeight(4.3);
	strcpy(t1.style, "isosceles");
	
	t2.setWidth(8.0);
	t2.setHeight(12.5);
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