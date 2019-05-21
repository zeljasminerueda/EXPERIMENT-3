#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	const int p = 3;
	const int d = 7;
	int i, j, k, l;
	int array[p][d];

	char province [1][4] = {"ABC"}; 

	cout << "Enter temperature of Province A, Province B and Province C for a week." << endl;
	{
		for (k = 0; k < 1; k++)
		{
			for (l = 0; l < 3; l++)
			{
					for (j = 0; j < 7; j++)
					{
						cout << "Province " << province[k][l] << ", Day " << j + 1 << " : ";
						cin >> array[l][j];
					}
				}
			}
		}
	cout << " " << endl;
	cout << "Displaying Values: " << endl;
	{
		for (k = 0; k < 1; k++)
		{
			for (l = 0; l < 3; l++)
			{
					for (j = 0; j < 7; j++)
					{
						cout << "Province " << province[k][l] << ", Day " << j + 1 << " = " << array[l][j] << endl;
					}
				}
			}
		}
	
_getch();
return 0;
}