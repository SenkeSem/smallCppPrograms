#include <iostream>

union u_type {
	u_type(short int a) { i = a; }
	u_type(char x, char y) { ch[0] = x; ch[1] = y; }
	
	void showchars() {
		std::cout << ch[0] << " ";
		std::cout << ch[1] << std::endl;
	}
	
	short int i;
	char ch[2];
};

int main()
{
	u_type u1(1000);
	u_type u2('X', 'Y');
	
	std::cout << "u1 as an integer: ";
	std::cout << u1.i << std::endl;
	std::cout << "u1 as an char: ";
	u1.showchars();
	
	std::cout << "u2 as an integer: ";
	std::cout << u2.i << std::endl;
	std::cout << "u2 as an char: ";
	u2.showchars();
	
	return 0;
}