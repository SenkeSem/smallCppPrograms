#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const char *p = "Alice's Adventures in Wonderland (also known as Alice in Wonderland) is an 1865 English children's novel by Lewis Carroll, a mathematics don at the University of Oxford. It details the story of a girl named Alice who falls through a rabbit hole into a fantasy world of anthropomorphic creatures. It is seen as an example of the literary nonsense genre. The artist Sir John Tenniel provided 42 wood-engraved illustrations for the book.";
	
	ofstream out("test.txt", ios::out | ios::binary);
	if(!out) {
		cout << "I can't open the file.\n";
		return 1;
	}
	
	while(*p) out.put(*p++);
	
	out.close();
	
	return 0;
}