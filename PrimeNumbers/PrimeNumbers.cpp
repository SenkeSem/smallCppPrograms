// A program for finding prime numbers

#include <iostream>
using namespace std;

int main ()
{
	int i, j;
	bool isprime;

	for (i = 1; i < 100; i++) {
		isprime = true;

		for (j = 2; j <= i / 2; j++) {
			if((i % j) == 0) isprime = false;
		}
		if (isprime)
			cout << i << " prime number. \n";
	}

	return 0;
}
