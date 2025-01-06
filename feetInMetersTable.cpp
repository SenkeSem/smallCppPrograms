
// Данная программа выводит таблицу перевода футов в метры

#include <iostream>
using namespace std;

int main ()
{
	double f;
	double m;
	int counter = 0;

	for (f = 1.0 ; f <= 100.0; f++) {
		m = f / 3.281;
		cout << f << " футов равняется " << m << " метров. \n";
		counter++;

		if (counter == 20) {
			cout << "\n";
			counter = 0;
		}
	}

	return 0;
}
