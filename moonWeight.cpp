/*
	Данная программа выводит таблицу соотношения
	земного веса к весу на Луне.

*/

#include <iostream>
using namespace std;

int main ()
{
	double earthWeight;
	double moonWeight;
	int counter = 0;

	for (earthWeight = 1.0 ; earthWeight <= 100.0; earthWeight++) {
		moonWeight = earthWeight * 0.17;
		setlocale(LC_ALL, "");
		wcout << earthWeight << L" фунт веса на Земле равняется " << moonWeight << L" фунтов на Луне. \n";
		counter++;

		if (counter == 25) {
			cout << "\n";
			counter = 0;
		}
	}

	return 0;
}

