#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream out("test.txt");
	if(!out) {
		cout << "I can't open the file.\n";
		return 1;
	}
	
	out << 10 << " " << 123.23 << "\n";
	out << "This is a short text file.";
	
	out.close();
	
	return 0;
}