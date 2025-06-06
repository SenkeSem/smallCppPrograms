#include <iostream>
using namespace std;

int main()
{
	const int ROWS = 3;
	const int COLUMNS = 3;
	
	char board[ROWS][COLUMNS] = {
		{'O', 'X', 'O'},
		{' ', 'X', 'X'},
		{'O', 'X', 'O'}
	};
	
	for(int i = 0; i < ROWS; i++) {
		for(int j = 0; j < COLUMNS; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	board[2][1] = 'O';
	board[1][0] = 'X';
	
	for(int i = 0; i < ROWS; i++) {
		for(int j = 0; j < COLUMNS; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
