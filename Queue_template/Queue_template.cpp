#include <iostream>

const int maxQsize = 100;

template <class QType> class Queue {
	QType q[maxQsize];
	int size;
	int putloc, getloc;
public:
	Queue(int len) {
		if (len > maxQsize) len = maxQsize;
		else if (len <= 0) len = 1;
		
		size = len;
		getloc = putloc = 0;
	}
	
	void put(QType data) {
		if(putloc == size) {
			std::cout << "The queue is full!" << std::endl;
			return;
		}
		
		putloc++;
		q[putloc] = data;
	}
	
	QType get() {
		if(putloc == getloc) {
			std::cout << "The queue is empty!" << std::endl;
			return 0;
		}
		
		getloc++;
		return q[getloc];
	}
};

int main()
{
	Queue<int> iQa(10), iQb(10);
	
	iQa.put(1);
	iQa.put(2);
	iQa.put(3);
	
	iQb.put(10);
	iQb.put(20);
	iQb.put(30);
	
	std::cout << "iQa contents: ";
	for(int i = 0; i < 3; i++)
		std::cout << iQa.get() << " ";
	std::cout << std::endl;
	
	std::cout << "iQb contents: ";
	for(int i = 0; i < 3; i++)
		std::cout << iQb.get() << " ";
	std::cout << std::endl;
	
	Queue<double> dQa(10), dQb(10);
	
	dQa.put(1.5);
	dQa.put(2.05);
	dQa.put(3.14);
	
	dQb.put(10.6);
	dQb.put(20.93);
	dQb.put(30.0004);
	
	std::cout << "dQa contents: ";
	for(int i = 0; i < 3; i++)
		std::cout << dQa.get() << " ";
	std::cout << std::endl;
	
	std::cout << "dQb contents: ";
	for(int i = 0; i < 3; i++)
		std::cout << dQb.get() << " ";
	std::cout << std::endl;
	
	Queue<char> cQa(10);
	
	cQa.put('S');
	cQa.put('e');
	cQa.put('m');
	cQa.put('y');
	cQa.put('o');
	cQa.put('n');
	
	std::cout << "cQa contents: ";
	for(int i = 0; i < 6; i++)
		std::cout << cQa.get() << " ";
	std::cout << std::endl;
	
	return 0;
}