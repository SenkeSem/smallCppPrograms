#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <random>

#include <io.h>
#include <fcntl.h>
using namespace std;

int main()
{
	_setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin),  _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);

	const int MAX_WRONG = 7;
	vector<wstring>::const_iterator iter;
	vector<wstring> words;
	
	words.push_back(L"БЕЛАРУСЬ");
	words.push_back(L"ДРАНИК");
	words.push_back(L"АРТИЛЛЕРИЯ");
	words.push_back(L"ТЕТРАДЬ");
	words.push_back(L"АЛГОРИТМ");
	words.push_back(L"ПРОЦЕССОР");
	words.push_back(L"ШОКОЛАД");
	words.push_back(L"ЧЕБУРАШКА");
	words.push_back(L"ОСТРОВ");
	words.push_back(L"ВОЛШЕБНИК");
	words.push_back(L"ИНФОРМАТИКА");
	words.push_back(L"АВСТРАЛИЯ");
	
	shuffle(words.begin(), words.end(), mt19937(random_device()()));
	
//	for(iter = words.begin(); iter != words.end(); ++iter) {
//		wcout << *iter << endl;
//	}
	
	const wstring THE_WORD = words[0];
	int wrong = 0;
	
	wstring soFar = L"";
	wstring used = L"";
	
	for(int i = 0; i < THE_WORD.length(); ++i) {
		soFar += L"-";
	}
	
	wcout << L"\n";
	wcout << soFar;
	
	wcout << L"\n";
	wcout << L"***Добро пожаловать в игру Виселица. Удачи!***\n";
	int wrong_number = MAX_WRONG - wrong;
	
	while((wrong < MAX_WRONG) && (soFar != THE_WORD)) {
		wcout << L"\nУ вас осталось " << (MAX_WRONG - wrong);
		wcout << L" возможностей допустить ошибку.\n";
		wcout << L"Вы уже использовали следующие буквы: " << used << endl;
		wcout << L"Слово на данный момент выглядит так: " << soFar << endl;
		
		wchar_t guess;
		wcout << L"\n\nВведите букву: ";
		wcin >> guess;
		
		guess = toupper(guess);
		
		while(used.find(guess) != wstring::npos) {
			wcout << L"Вы использовали эту букву: " << guess << endl;
			wcout << L"Введите новую букву: ";
			wcin >> guess;
			guess = toupper(guess);
		}
		
		used += guess;
		
		if(THE_WORD.find(guess) != wstring::npos) {
			wcout << L"Верно, в слове есть такая буква (" << guess << ").\n";
			
			for(int i = 0; i < THE_WORD.length(); i++) {
				if(THE_WORD[i] == guess) {
					soFar[i] = guess;
				}
			}
		} else {
			wcout << L"Sorry honey, ты не угадал. Минус одна жизнь!\n";
			wcout << L"Такой буквы нет в слове - " << guess << endl;
			++wrong;
		}	
	}
	
	if(wrong == MAX_WRONG)
			wcout << L"Тебя повесили...\n";
		else
			wcout << L"Ты выиграл!\n";
		
		wcout << L"\nЗагаданное слово: " << THE_WORD << endl;	
	
	return 0;
}

