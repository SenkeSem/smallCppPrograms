#include <iostream>

class MyClass {
	int val;
public:
	MyClass(int i) {
		val = i;
		std::cout << "Inside the constructor" << std::endl;
	}
	
	~MyClass() { std::cout << "Inside the destructor" << std::endl; }
	
	int getVal() { return val; }
	void setVal(int i) { val = i; }
};

void display(MyClass &ob)
{
	std::cout << ob.getVal() << std::endl;
}

void change(MyClass &ob)
{
	ob.setVal(100);
}

int main()
{
	MyClass a(3);
	std::cout << "Before display()" << std::endl;
	display(a);;
	std::cout << "After display()" << std::endl;
	
	change(a);
	std::cout << "After change()" << std::endl;
	display(a);
	
	return 0;
}