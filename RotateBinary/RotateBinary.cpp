#include <iostream>

unsigned char rrotate(unsigned char val, int n);
unsigned char lrotate(unsigned char val, int n);
void show_binary(unsigned int u);

int main()
{
	char ch = 'T';
	std::cout << "The original value in binary code:" << std::endl;
	show_binary(ch);
	
	std::cout << "Cyclic left shift 8 times:" << std::endl;
	for(int i = 0; i < 8; i++) {
		ch = lrotate(ch, 1);
		show_binary(ch);
	}
	std::cout << "\n";
	
	std::cout << "Cyclic right shift 8 times:" << std::endl;
	for(int i = 0; i < 8; i++) {
		ch = rrotate(ch, 1);
		show_binary(ch);
	}
	
	return 0;
}

unsigned char lrotate(unsigned char val, int n)
{
	unsigned int t;
	
	t = val;
	for(int i = 0; i < n; i++) {
		t = t << 1;
		
		if(t & 256) {
			t = t | 1;
		}
	}
	
	return t;
}

unsigned char rrotate(unsigned char val, int n)
{
	unsigned int t;
	
	t = val;
	t = t << 8;
	
	for(int i = 0; i < n; i++) {
		t = t >> 1;
		
		if(t & 128) {
			t = t | 32768;
		}
	}
	
	t = t >> 8;
	
	return t;
}


void show_binary(unsigned int u)
{
	int t;
	
	for(t = 128; t > 0; t = t / 2) {
		if(u & t) std::cout << "1 ";
		else std::cout << "0 ";
	}
	
	std::cout << "\n";
}