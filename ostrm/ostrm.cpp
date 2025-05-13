#include <iostream>
using namespace std;

class ThreeD {
	int x, y, z;
public:
	ThreeD(int a, int b, int c) { x = a; y = b; z = c; }
	friend ostream &operator<<(ostream &stream, ThreeD obj);
	friend istream &operator>>(istream &stream, ThreeD &obj);
};

ostream &operator<<(ostream &stream, ThreeD obj)
{
	stream << obj.x << ", ";
	stream << obj.y << ", ";
	stream << obj.z << "\n";
	return stream;
}

istream &operator>>(istream &stream, ThreeD &obj)
{
	std::cout << "Enter value X Y Z:";
	stream >> obj.x >> obj.y >> obj.z;
	return stream;
}

int main()
{
	ThreeD a(1, 2, 3);
	
	cout << a;
	cin >> a;
	cout << a;
	
	return 0;
}