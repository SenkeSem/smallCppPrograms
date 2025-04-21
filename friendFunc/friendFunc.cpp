#include <iostream>

class MyClass {
	int a,b;
public:
	MyClass(int i, int j) { a = i; b = j; }
	friend int comDenom(MyClass ob);
};

int comDenom(MyClass ob)
{
	int max = ob.a < ob.b ? ob.a : ob.b;
	
	for(int i = 2; i <= max; i++) {
		if((ob.a % i) == 0 && (ob.b % i) == 0) return i;
	}
	
	return 0;
}

int main()
{
	MyClass a(18, 111);
	
	if(comDenom(a))
		std::cout << "The common denominator is " << comDenom(a) << std::endl;
	else
		std::cout << "There is no common denominator" << std::endl;
	
	return 0;
}