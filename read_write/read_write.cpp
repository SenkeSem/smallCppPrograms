#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char n[5] = { 'x', 'y', 'z', 'd', 'e' };
	int i;
	
	ofstream out("test.txt", ios::out | ios::binary);
	if(!out) {
		cout << "I can't open a file. \n";
		return 1;
	}
	
	out.write((char *) &n, sizeof n);
	out.close();
	
	for(i = 0; i < 5; i++)
		n[i] = 0;
	
	ifstream in("test.txt", ios::in | ios::binary);
	if(!in) {
		cout << "I can't open a file. \n";
		return 1;
	}
	
	in.read((char *) &n, sizeof n);
	for(i = 0; i < 5; i++)
		cout << n[i] << " ";
	
	in.close();
	
	return 0;
}

