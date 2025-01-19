
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double Principal;
	double IntRate;
	double PayPerYear; 
	double NumYears;
	double Payment; 
	double numer, denom;
	double b,e;
	double FullAmoInt;

	cout << "Enter the loan amount: ";
	cin >> Principal;

	cout << "Enter the interest rate (example - 0.075): ";
	cin >> IntRate;

	cout << "Enter the number of payments per year: ";
	cin >> PayPerYear;

	cout << "Enter the number of years: ";
	cin >> NumYears;

	numer = IntRate * Principal / PayPerYear;
	b = (IntRate / PayPerYear) + 1;
	e = -(PayPerYear * NumYears);
	denom = 1 - pow(b, e);
	Payment = numer / denom;

	cout << "The regular payment will be: " << Payment << "\n";
	cout << "____________________________________ \n";

	FullAmoInt = (Payment * NumYears * PayPerYear) - Principal;

	cout << "The full amount of interest paid on the loan: " << FullAmoInt << "\n";
	cout << "Total amount of payments: " << FullAmoInt + Principal << "\n";

	return 0;
}
