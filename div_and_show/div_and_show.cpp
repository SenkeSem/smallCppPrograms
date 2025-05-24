#include <iostream>

template <class T> class MyClass {
	T x,y;
public:
	MyClass(T a, T b) {
		x = a;
		y = b;
	}
	T div() { return x/y; }
};

template <class T1, class T2> class MyClass1 {
	T1 i;
	T2 j;
public:
	MyClass1(T1 a, T2 b) { i = a; j = b; }
	void show() { std::cout << i << " " << j << std::endl; }
};

int main()
{
	MyClass<double> d_ob(10.0, 3.0);
	std::cout << "Dividing numbers of the double type: " << d_ob.div() << std::endl;
	
	MyClass<int> i_ob(10, 3);
	std::cout << "Dividing numbers of the int type: " << i_ob.div() << std::endl;
	std::cout << "\n";

	MyClass1<int, double> ob1(10, 0.23);
	MyClass1<char, const char *> ob2('X', "Test string");
	
	ob1.show();
	ob2.show();
	
	return 0;
}