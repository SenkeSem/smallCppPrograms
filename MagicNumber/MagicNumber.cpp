#include <iostream>
#include <ctime>
using namespace std;

int main ()
{
	srand(time(0));

	int magic;
	int guess;

	do {
		cout << "Enter the magic number: ";
		cin >> guess;
	
		if (guess > magic) {
			cout << "Less. \n";
		} else {
			cout << "More. \n";
		}

	} while (magic != guess);

	cout << "Right! The magic number is: " << guess;

	return 0;

}
