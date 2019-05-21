#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
	char character[1000];
	int s, i;

	cout << "Enter characters: " << endl;
	cin.getline(character, 1000);

	s = strlen(character);

	for (i = s; i >= 0; i--)
		{
			cout << character[i];
		}

	cout << " " << endl;
	cout << "Array size = " << s + 1 << endl;

	_getch();
	return 0;
}