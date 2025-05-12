#include <iostream>
#include <cstring>

class TwoDShape {
	double width;
	double height;
	char name[20];
public:
	TwoDShape() {
		width = height = 0;
		strcpy(name, "unknown");
	}
	
	TwoDShape(double w, double h, const char *n) {
		width = w;
		height = h;
		strcpy(name, n);
	}
	
	TwoDShape(double x, const char *n) {
		width = height = x;
		strcpy(name, n);
	}

	void showDim() {
		std::cout
		<< "Width and height: " << width
		<< " " << height << std::endl;
	}
	
	double getWidth() { return width; }
	double getHeight() { return height; }
	void setWidth(double w) { width = w; }
	void setHeight(double h) { height = h; }
	char *getName() { return name; }
	
	virtual double area() {
		std::cout << "ERROR: area() must be defined." << std::endl;
		return 0.0;
	}
};

class Triangle : public TwoDShape {
	char style[20];
public:
	Triangle() {
		strcpy(style, "unknown");
	}
	
	Triangle(double x) : TwoDShape(x, "triangle") {
		strcpy(style, "isosceles");
	}

	Triangle(const char *str, double w, double h) : TwoDShape(w, h, "triangle") {
		strcpy(style, str);
	}
	
	double area() {
		return getWidth() * getHeight() / 2;
	}
	
	void showStyle() {
		std::cout << "Triangle " << style << std::endl;
	}
};

class Rectangle : public TwoDShape {
public:
	Rectangle(double w, double h) : TwoDShape(w, h, "rectangle") {}
	Rectangle(double x) : TwoDShape(x, "rectangle") {}
	
	bool isSquare() {
		if(getWidth() == getHeight()) return true;
		return false;
	}
	
	double area() { return getWidth() * getHeight(); }
};

int main()
{
	TwoDShape *shapes[5];
	
	Triangle t1("rectangular", 8.0, 12.0);
	Rectangle r1(10);
	Rectangle r2(10, 4);
	Triangle t2(7.0);
	TwoDShape g1(10, 20, "Generalized figure");
	
	shapes[0] = &t1;
	shapes[1] = &r1;
	shapes[2] = &r2;
	shapes[3] = &t2;
	shapes[4] = &g1;
	
	
	for(int i = 0; i < 5; i++) {
		std::cout << "The object is " << shapes[i]->getName() << std::endl;
		std::cout << "The area is equal to " << shapes[i]->area() << std::endl;
		std::cout << "\n";
	}

	return 0;
}