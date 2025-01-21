// ѕрограмма вычисл€ет среднее абсолютное значение п€ти случайных чисел

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int stop = 6;
	int counter = 1;
	double value = 0;
	
	cout << "Enter five random number \n";

	for (counter; counter < stop; counter++) {
		double number;
		cout << "Number " << counter << ": ";
		cin >> number;
		value += abs(number);
	}

	cout << "The absolute average value is " << value/5 ;

	return 0;
}
