#include <iostream>
#include <cmath>

class Triangle {
	double h;
	double x;
public:
	Triangle(double i, double j) { h = i; x = j; }
	
	double hypot() { 
		return sqrt(h*h + x*x);
	}
	
	double area() {
		return 0.5 * h * x;
	}
};

int main()
{
	Triangle t1(10, 15);
	Triangle t2(2, 7);
	Triangle t3(2.5, 7.2);
	
	std::cout << "\n";
	std::cout << "hypot: " << std::endl;
	std::cout << "t1 = " << t1.hypot() << std::endl;
	std::cout << "t2 = " << t2.hypot() << std::endl;
	std::cout << "t3 = " << t3.hypot() << std::endl;
	std::cout << "\n";
	
	std::cout << "area: " << std::endl;
	std::cout << "t1 = " << t1.area() << std::endl;
	std::cout << "t2 = " << t2.area() << std::endl;
	std::cout << "t3 = " << t3.area() << std::endl;
	
	return 0;
}