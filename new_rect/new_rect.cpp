#include <iostream>
#include <new>

class Rectangle {
	int width;
	int height;
public:
	Rectangle() {
		width = height = 0;
		std::cout << "Constructing a rectangle of size "
		<< width << " x " << height << std::endl;
	}
	
	Rectangle(int w, int h) {
		width = w;
		height = h;
		std::cout << "Constructing a rectangle of size "
		<< width << " x " << height << std::endl;
	}
	
	~Rectangle() {
		std::cout << "Destroying a rectangle of size "
		<< width << " x " << height << std::endl;
	}
	
	void set(int w, int h) {
		width = w;
		height = h;
	}
	
	int area() {
		return width * height;
	}
};

int main()
{
	Rectangle *p;
	
	try {
		p = new Rectangle [3];
	} catch(std::bad_alloc) {
		std::cout << "Memory allocation error.\n";
		return 1;
	}
	
	std::cout << "\n";
	
	p[0].set(3, 4);
	p[1].set(10, 8);
	p[2].set(5, 6);
	
	for(int i = 0; i < 3; i++)
		std::cout << "Area is " << p[i].area() << std::endl;
	
	std::cout << "\n";
	
	delete [] p;
	
	return 0;
}