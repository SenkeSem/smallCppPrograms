#include <iostream>

class MyClass {
	int x;
public:
	void set_x(int i) { x = i; }
	int get_x() { return x; }
};

int main()
{
	MyClass obs[4];
	int i;
	
	for(i = 0; i < 4; i++) obs[i].set_x(i);
	
	for(i = 0; i < 4; i++) {
		std::cout << "obs[" << i << "].get_x(): " << obs[i].get_x() << std::endl;
	}
	
	return 0;
}