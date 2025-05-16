#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	char ch;
	
	if(argc != 2) {
		cout << "Using: get_input <file_name>\n";
		return 1;
	}
	
	ifstream in(argv[1], ios::in | ios::binary);
	if(!in) {
		cout << "I can't open the file.\n";
		return 1;
	}
	
	while(in) {
		in.get(ch);
		if(in) cout << ch;
	}
	
	in.close();
	
	return 0;
}