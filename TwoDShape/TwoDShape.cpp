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
	char style[20];
public:
	Triangle(const char *str, double w, double h) {
		setWidth(w);
		setHeight(h);
		strcpy(style, str);
	}
	
	double area() {
		return getWidth() * getHeight() / 2;
	}
	
	void showStyle() {
		std::cout << "Triangle " << style << std::endl;
	}
};

int main()
{
	Triangle t1("isosceles", 4.3, 4.3);
	Triangle t2("right", 8.0, 12.0);
	Triangle t3("isosceles", 7.6, 7.6);

	std::cout << "t1 data: \n";
	t1.showDim();
	t1.showStyle();
	std::cout << "The area is equal to " << t1.area() << std::endl;
	std::cout << "\n";
	
	std::cout << "t2 data: \n";
	t2.showDim();
	t2.showStyle();
	std::cout << "The area is equal to " << t2.area() << std::endl;
	std::cout << "\n";
	
	std::cout << "t3 data: \n";
	t3.showDim();
	t3.showStyle();
	std::cout << "The area is equal to " << t3.area() << std::endl;
	std::cout << "\n";
	return 0;
}