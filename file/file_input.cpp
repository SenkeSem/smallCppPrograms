#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char ch;
	int i;
	float f;
	char str[80];
	
	ifstream in("test.txt");
	if(!in) {
		cout << "I can't open the file.\n";
		return 1;
	}

	in >> i;
	in >> f;
	in >> ch;
	in >> str;
	
	cout << i << " " << f << " " << ch << "\n";
	cout << str;
	
	in.close();
	
	return 0;
}