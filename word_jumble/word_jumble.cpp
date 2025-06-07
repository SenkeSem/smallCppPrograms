#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include <io.h>
#include <fcntl.h>

using namespace std;

int main()
{
	_setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin),  _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);

	
	enum fields {WORD, HINT, NUM_FUELDS};
	const int NUM_WORDS = 5;
	const wstring WORDS[NUM_WORDS][NUM_FUELDS] = 
	{
		{L"Яблоко", L"Плод древа познания."},
		{L"Азбука", L"По этой книге учат буквы в первых классах."},
		{L"Термос", L"В этом сосуде жидкость остаётся горячей очень долго."},
		{L"Ручка", L"Ты дёргаешь за неё каждый раз чтобы дверь открылась."},
		{L"Джейсон", L"Мажор из Калифорнии у которого стояк на экзотику."}
	};
	
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	wstring theWord = WORDS[choice][WORD];
	wstring theHint = WORDS[choice][HINT];
	
	wstring jumble = theWord;
	int length = jumble.size();
	
	for(int i = 0; i < length; i++) {
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		
		wchar_t temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}
	
	wcout << endl;
	wcout << L"\t***Добро пожаловать в игру СЛОВОМЕСКА!***\n\n";
	wcout << L" -Вам будет дано слово в котором будут перемешаны буквы.\n";
	wcout << L" -Вы можете угадать его сразу или попросить подсказку.\n";
	wcout << L" -Введите 'подсказка' для подсказки.\n";
	wcout << L" -Введите 'выйти' если хотите выйти из игры.\n";
	
	wcout << endl;
	
	wcout << L"Перемешанное слово: " << jumble << endl;
	wstring guess;
	wcout << L"Ваш вариант: ";
	wcin >> guess;
	
	while((guess != theWord) && (guess != L"выйти"))
	{
		if(guess == L"подсказка")
		{
			wcout << theHint;
		}
		else
		{
			wcout << L"Не угадали :(";
		}
		wcout << L"\nВаш вариант: ";
		wcin >> guess;
		wcout << endl;
	}
	
	if(guess == theWord)
	{
		wcout << L"Поздравляю, вы отгадали слово! :) Приходите сыграть ещё\n";
	}
	
	wcout << L"Спасибо за игру.\n";
	
	return 0;
}