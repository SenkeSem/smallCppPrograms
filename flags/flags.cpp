#include <iostream>
using namespace std;

int main()
{
	ios::fmtflags f;
	
	f = cout.flags();
	
	if(f & ios::showpos)
		cout << "showpost is set for cout. \n";
	else
		cout << "showpost reset for cout. \n";
	
	cout << "\nLet's set up a showpost for cout \n";
	cout.setf(ios::showpos);
	
	f = cout.flags();
	
	if(f & ios::showpos)
		cout << "showpost is set for cout. \n";
	else
		cout << "showpost reset for cout. \n";
	
	cout << "\nLet's reset showpost for cout \n";
	cout.unsetf(ios::showpos);
	
	f = cout.flags();
	if(f & ios::showpos)
		cout << "showpost is set for cout. \n";
	else
		cout << "showpost reset for cout. \n";
	
	return 0;
}