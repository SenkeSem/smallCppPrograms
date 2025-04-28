#include <iostream>

const int maxQsize = 100;

class Queue {
	char q[maxQsize];
	int size;
	
	int putloc, getloc;
public:
	
	Queue(int len) {
		if(len > maxQsize) len = maxQsize;
		else if(len <= 0) len = 1;
		
		size = len;
		putloc = getloc = 0;
	}
	
	void put(char ch) {
		if(putloc == size) {
			std::cout << " -- Queue is full" << std::endl;
			return;
		}
		
		putloc++;
		q[putloc] = ch;
	}
	
	char get() {
		if(getloc == putloc) {
			std::cout << " -- Queue is empty" << std::endl;
			return 0;
		}
		
		getloc++;
		return q[getloc];
	}
};

int main()
{
	Queue bigQ(100);
	Queue smallQ(4);
	int i;
	char ch;
	
	std::cout << "Using bigQ for keeping english alphabet!" << std::endl;
	for(i = 0; i < 26; i++) bigQ.put('A' + i);
	
	std::cout << "Show elements from bigQ: " << std::endl;
	for(i = 0; i < 26; i++) {
		ch = bigQ.get();
		if(ch != 0) std::cout << ch << " ";
	}
	
	std::cout << "\n";
	
	for(i = 0; i < 5; i++) {
		std::cout << "Trying to record " << (char) ('Z' - i) << std::endl;
		
		smallQ.put('Z' - i);
	}
	
	std::cout << "\n";
	
	std::cout << "smallQ contents: ";
	for(i = 0; i < 5; i++) {
		ch = smallQ.get();
		
		if(ch != 0) std::cout << ch;
	}
	
	return 0;
}