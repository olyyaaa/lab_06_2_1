// lab_06.2_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "\nEnter the size of the array(max 100)\n";
	int s;
	cin >> s;

	if (s % 2 != 0)
		cout << "\nSize must be even\n";
	else
	{
		int size = s;
		int arr[100];

		cout << "\nNow input the array\n";

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		cout << "\nChanging the array\n";

		for (int i = 0; i < size / 2; i++)
		{
			arr[i] = arr[i] + arr[size / 2 + i];
			arr[size / 2 + i] = arr[i] - arr[size / 2 + i];
			arr[i] = arr[i] - arr[size / 2 + i];
		}

		cout << "\nThe changed array is :-\n";

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << ' ';
		}
	}
	return 0;
}
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
