#include <iostream>

const int maxSize = 100;

class Set {
	int len;
	char members[maxSize];
	int find(char ch);
	
public:
	Set() { len = 0; }
	int getLenght() { return len; }
	
	void showset();
	bool isMember(char ch);
	
	Set operator+ (char ch);
	Set operator- (char ch);
	
	Set operator+ (Set obj);
	Set operator- (Set obj);
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

int main()
{
	Set a;
	Set b;
	Set c;
	
	a = a + 'A';
	a = a + 'B';
	a = a + 'C';
	a.showset();
	
	a = a - 'B';
	a.showset();
	
	b = b + 'W';
	b = b + 'B';
	b = b + 'C';
	std::cout << "Set b: ";
	b.showset();
	
	c = c + 'A';
	c = c + 'B';
	c = c + 'F';
	std::cout << "Set c: ";
	c.showset();
	
	a = a + b;
	std::cout << "Set a after a = a + b: ";
	a.showset();
	
	c = c + b;
	std::cout << "Set c after c = c + b: ";
	c.showset();
	
	c = c - a;
	std::cout << "Set c after c = c - a: ";
	c.showset();
	
	b = b - a;
	std::cout << "Set b after b = b - a: ";
	b.showset();
	
	return 0;
}