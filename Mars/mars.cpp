// Программа высчитывает временную задержку при связе с Марсом

#include <iostream>
using namespace std;

int main ()
{
	double distance;
	double lightspeed;
	double delay;
	double delay_in_min;

	distance = 34000000.0; // miles
	lightspeed = 186000.0; // miles per seconds

	delay = distance / lightspeed;
	delay_in_min = delay / 60;

	cout << "The delay in communication with Mars is " << delay_in_min << " minutes";

	return 0;
}
