#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
	char ch;
	
	if(argc != 3) {
		cout << "Using: write_file <file> <start_pointer>.\n";
		return 1;
	}
	
	ifstream in(argv[1], ios::in | ios::binary);
	if(!in) {
		cout << "I can't open the file.\n";
		return 1;
	}
	
	in.seekg(atoi(argv[2]), ios::beg);
	
	while(in.get(ch))
		cout << ch;
	
	return 0;
}