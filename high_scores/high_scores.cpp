#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <random>

using namespace std;

int main()
{
	vector<int>::const_iterator iter;
	
	cout << "Creating a list of scores.";
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);
	scores.push_back(4000);
	scores.push_back(6000);
	scores.push_back(8000);
	
	cout << "\nHigh Scores:\n";
	for(iter = scores.begin(); iter != scores.end(); ++iter) {
		cout << *iter << endl;
	}
	
	cout << "\nFinding a score.";
	
	int score;
	cout << "\nEnter a score to find: ";
	cin >> score;
	iter = find(scores.begin(), scores.end(), score);
	
	if(iter != scores.end())
		cout << ":) Score found.\n";
	else
		cout << ":( Score not found.\n";
	
	cout << "\nRandomizing scores.";
	shuffle(scores.begin(), scores.end(), mt19937(random_device()()));
	
	cout << "\n";
	for(iter = scores.begin(); iter != scores.end(); ++iter) {
		cout << *iter << endl;
	}
	
	cout << "\nSorting scores.";
	sort(scores.begin(), scores.end());
	
	cout << "\n";
	for(iter = scores.begin(); iter != scores.end(); ++iter) {
		cout << *iter << endl;
	}
	
	return 0;
}