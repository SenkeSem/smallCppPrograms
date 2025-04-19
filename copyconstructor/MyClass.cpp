#include <iostream>

class MyClass {
	int val;
	int copynumber;
public:
	MyClass(int i) {
		val = i;
		copynumber = 0;
		std::cout << "Inside the constructor" << std::endl;
	}
	
	MyClass(const MyClass &ob) {
		val = ob.val;
		copynumber = ob.copynumber + 1;
		std::cout << "Inside the copy constructor" << std::endl;
	}
	
	~MyClass() {
		if(copynumber == 0) {
			std::cout << "Destruction of the original" << std::endl;
		} else {
			std::cout << "Destruction of a copy: " << copynumber << std::endl;
		}
	}
	
	int getVal() { return val; }
};

void display(MyClass ob)
{
	std::cout << ob.getVal() << std::endl;
}

int main()
{
	MyClass a(10);
	
	display(a);
	
	return 0;
}