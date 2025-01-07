// Program for convertation Jupiter years in Earth years

#include <iostream>
using namespace std;

int main ()
{
	double jupiterYears;
	double earthYears;

	cout << "Enter the number of years on Jupiter: ";
	cin >> jupiterYears;

	earthYears = jupiterYears * 12;
	cout << "Number of Earth years: " << earthYears;

	return 0;
}
