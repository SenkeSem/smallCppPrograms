#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> inventory;
	
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	
	cout << "You have " << inventory.size() << " items.\n" ;
	cout << "\nYour items:\n";
	
	for(unsigned int i = 0; i < inventory.size(); i++) {
		cout << inventory[i] << "\n";
	}
	
	cout << "\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";
	cout << "\nYour items:\n";
	
	for(unsigned int i = 0; i < inventory.size(); i++) {
		cout << inventory[i] << "\n";
	}
	
	cout << "\nThe item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";
	cout << "\nYou shield is destroyes in a fierce battle.";
	inventory.pop_back();
	cout << "\nYour items:\n";
	
	for(unsigned int i = 0; i < inventory.size(); i++) {
		cout << inventory[i] << "\n";
	}
	
	cout << "\nYou were robbed of all of your possessions by a thief.";
	inventory.clear();
	if(inventory.empty())
	{
		cout << "\nYou have nothing.\n";
	}
	else
	{
		cout << "\nYou have at least one item.\n";
	}
	
	return 0;
}