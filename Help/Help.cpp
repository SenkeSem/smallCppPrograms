#include <iostream>

class Help {
public:
	void helpon(char what);
	void showmenu();
	bool isvalid(char ch);
};

void Help::helpon(char what) {
	switch(what) {
		case '1':
			std::cout << "The if Statement:" << std::endl;
			std::cout << "if (condition) block of code;" << std::endl;
			std::cout << "else block of code;" << std::endl;
			std::cout << "\n";
			break;
		case '2':
			std::cout << "The switch Statement:" << std::endl;
			std::cout << "switch (expression) {" << std::endl;
			std::cout << "case x:" << std::endl;
			std::cout << "break;" << std::endl;
			std::cout << "}" << std::endl;
			std::cout << "\n";
			break;
		case '3':
			std::cout << "The goto Statement" << std::endl;
			std::cout << "goto point;" << std::endl;
			std::cout << "\n";
			break;
	}
}

void Help::showmenu() {
	std::cout << "Help for:" << std::endl;
	std::cout << "1. if" << std::endl;
	std::cout << "2. switch" << std::endl;
	std::cout << "3. goto" << std::endl;
	std::cout << "Select one of the items (q to complete)" << std::endl;
}

bool Help::isvalid(char ch) {
	if(ch < '1' || ch > '3' && ch != 'q') return false;
	else return true;
}

int main()
{
	char choice;
	Help hlpob;
	
	for(;;) {
		do {
			hlpob.showmenu();
			std::cin >> choice;
		} while(!hlpob.isvalid(choice));
			
		if(choice == 'q') break;
		std::cout << "\n";
		
		hlpob.helpon(choice);
	}
	
	return 0;
}