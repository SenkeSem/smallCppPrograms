// Программа для перевода расстояния из метров в футы

#include <iostream>
using namespace std;

int main () 
{
	double meters;
	double feet;

	cout << "Введити расстояние в метрах: ";
	cin >> meters;

	feet = meters * 3.281;

	cout << "Расстояние в футах: ";
	cout << feet;
	
	return 0;
}

