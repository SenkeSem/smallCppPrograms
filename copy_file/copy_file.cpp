#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
	char ch;
	if(argc != 3) {
		cout << "Using: copy_file <file1> <file2>.\n";
		return 1;
	}
	
	ifstream src(argv[1], ios::in | ios::binary);
	if(!src) {
		cout << "I can't open the <file1>.\n";
		return 1;
	}
	
	ofstream target(argv[2], ios::out | ios::binary);
	if(!target) {
		cout << "I can't open the <file2>.\n";
		return 1;
	}
	
	do {
		src.get(ch);
		if(!src.eof()) target.put(ch);
	} while(!src.eof());
	
	src.close();
	target.close();
	
	return 0;
}