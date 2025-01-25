#include <iostream>
using namespace std;

int main ()
{
	int i, j;

	for (i = 2; i <= 30; i++) {
		cout << "Divisors of the number " << i << ": ";

		for (j = 2; j < i; j++) {
			if (i % j == 0) cout << j << " ";
		}

		cout << "\n";
	}

	return 0;
}
