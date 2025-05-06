#include <iostream>

const int maxSize = 100;

class Set {
	int len;
	char members[maxSize];
	int find(char ch);
	
public:
	Set() { len = 0; }
	sdag
	int getLenght() { return len; }
	
	void showset();
	bool isMember(char ch);
	
	Set operator+ (char ch);
	Set operator- (char ch);
	
	Set operator+ (Set obj);
	Set operator- (Set obj);
	
	Set operator& (Set obj);
	bool operator> (Set obj);
	bool operator< (Set obj);
};

int Set::find(char ch)
{
	for(int i = 0; i < len; i++)
		if(members[i] == ch) return i;
	
	return -1;
}

void Set::showset()
{
	std::cout << "{ ";
	for(int i = 0; i < len; i++) 
		std::cout << members[i] << " ";
	
	std::cout << "}" << std::endl;
}

bool Set::isMember(char ch)
{
	if(find(ch) != -1) return true;
	return false;
}

Set Set::operator +(char ch)
{
	Set newSet;
	
	if(len == maxSize) {
		std::cout << "The set is full" << std::endl;
		return *this;
	}
	
	newSet = *this;
	
	if(find(ch) == -1) {
		newSet.members[newSet.len] = ch;
		newSet.len++;
	}	
	
	return newSet;
}

Set Set::operator -(char ch)
{
	Set newSet;
	int i = find(ch);
	
	for(int j = 0; j < len; j++)
		if(j != i) newSet = newSet + members[j];
	
	return newSet;
}

Set Set::operator +(Set obj)
{
	Set newSet = *this;
	
	for(int i = 0; i < obj.len; i++)
		newSet = newSet + obj.members[i];
	
	return newSet;
}

Set Set::operator -(Set obj)
{
	Set newSet = *this;
	
	for(int i = 0; i < obj.len; i++)
		newSet = newSet - obj.members[i];
	
	return newSet;
}

Set Set::operator &(Set obj)
{
	Set newSet;
	
	for(int i = 0; i < obj.len; i++) {
		if(obj.find(members[i]) != -1)
			newSet = newSet + members[i];
	}

	return newSet;
}

bool Set::operator >(Set obj)
{
	int counter = 0;
	
	for(int i = 0; i < len; i++) {
		if(obj.find(members[i]) != -1) counter++;
	}
	
	if((counter < len) && (counter == obj.len)) return true;
	
	return false;
}

bool Set::operator <(Set obj)
{
	if(len > obj.len) return false;
	
	for(int i = 0; i < len; i++)
		if(obj.find(members[i]) == -1) return false;
	
	return true;
}

int main()
{
	Set a, b, c, d, ad, ac, cd;
	
	a = a + 'A';
	a = a + 'B';
	a = a + 'C';
	a.showset();
	
	a = a - 'B';
	a.showset();
	
	b = b + 'W';
	b = b + 'B';
	b = b + 'C';
	std::cout << "Set b: "; b.showset();
	
	c = c + 'A';
	c = c + 'B';
	c = c + 'F';
	std::cout << "Set c: "; c.showset();
	
	d = d + 'A';
	d = d + 'B';
	d = d + 'Z';
	d = d + 'Y';
	d = d + 'F';
	std::cout << "Set d: "; d.showset();
	
	a = a + b;
	std::cout << "Set a after a = a + b: "; a.showset();
	
	c = c + b;
	std::cout << "Set c after c = c + b: "; c.showset();
	
	c = c - a;
	std::cout << "Set c after c = c - a: "; c.showset();
	
	b = b - a;
	std::cout << "Set b after b = b - a: "; b.showset();	
	std::cout << "\n";
	
	std::cout << "Set a: "; a.showset();
	std::cout << "Set b: "; b.showset();	
	std::cout << "Set c: "; c.showset();	
	std::cout << "Set d: "; d.showset();
	
	ad = a & d;
	std::cout << "Set ad: "; ad.showset(); // { A B }
	
	ac = a & c;
	std::cout << "Set ac: "; ac.showset(); // { }
	
	cd = c & d;
	std::cout << "Set cd: "; cd.showset(); // { F }
	
	if(d > ad) std::cout << "The set d is a superset of ad" << std::endl;
	if(a > ad) std::cout << "The set a is a superset of ad" << std::endl;
	
	if(a > c) std::cout << "The set a is a superset of c" << std::endl;
	else std::cout << "The set a is not a superset of c" << std::endl;
	std::cout << "\n";
	
	if(c < d) std::cout << "The set c is a subset of d" << std::endl;
	if(ad < a) std::cout << "The set ad is a subset of a" << std::endl;
	if(cd < a) std::cout << "The set cd is a subset of a" << std::endl;
	 else std::cout << "The set cd is not a subset of a" << std::endl;
 
	return 0;
}