#include <iostream>

class MyClass {
	int val;
public:
	MyClass(int i) {
		val = i;
	}
	
	int getVal() { return val;}
	void setVal(int i) { val = i;}
};

void display(MyClass ob)
{
	std::cout << ob.getVal() << std::endl;
}

void change(MyClass ob)
{
	ob.setVal(100);
	std::cout << "ob value in change(): ";
	display(ob);
}

int main()
{
	MyClass a(10);
	
	std::cout << "a value before change(): ";
	display(a);
	
	change(a);
	
	std::cout << "a value after change(): ";
	display(a);
	
	return 0;
}
