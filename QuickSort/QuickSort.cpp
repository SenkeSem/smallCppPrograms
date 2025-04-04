#include <iostream>
#include <cstring>

void quicksort(char *items, int len);
void qs(char *items, int left, int right);

int main ()
{
	char str[80];
	
	std::cout << "Enter string: ";
	std::cin >> str;
	quicksort(str, strlen(str));
	std::cout << "Sorted string: " << str << std::endl;
	
	return 0;
}

void quicksort(char *items, int len)
{
	qs(items, 0, len - 1);
}

void qs(char *items, int left, int right)
{
	int i, j;
	char x, y;
	
	i = left;
	j = right;
	x = items[(left + right)/2];
	
	do {
		while((items[i] < x) && (i < right)) i++;
		while((x < items[j]) && (j > left)) j--;
		
		if(i <= j) {
			y = items[i];
			items[i] = items[j];
			items[j] = y;
			i++;
			j--;
		}
	} while(i <= j);
	
	if(left < j) qs(items, left, j);
	if(i < right) qs(items, i, right);
}