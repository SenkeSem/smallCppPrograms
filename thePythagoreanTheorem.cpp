/*
Программа для нахождения длины гипотенузы прямоугольного
треуголька при любых двух катетах.       	
*/

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double x,y,z;
	
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;

	cout << "Value z is " << sqrt(x*x + y*y);
	
	return 0;
	
}
