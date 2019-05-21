#include<iostream>
#include<conio.h>

using namespace std;
int arr[10], j, i, L, S, N;
double T=0, A=0;

int main()

{
	cout << "This array only takes 10 elements " << endl;
	cout << "Enter 10 integers: ";

	for (i = 0; i < 10; i++)
	{
		cin >> arr[i];
		T += arr[i];
		A = T / 10;
	}
	
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				N = arr[i];
				arr[i] = arr[j];
				arr[j] = N;
			}
		}
		L= arr[9];
		S = arr[0];
	}
		

		cout << "The largest integer is " << L << endl;
		cout << "The smallest integer is " << S << endl;
		cout << "The total of all integers is " << T << endl;
		cout << "The average of all integers is " << A<< endl;

	_getch();
	return 0;
}
