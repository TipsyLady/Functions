#include <iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = rand();
		// функци€ rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}

void ShiftLeft(int arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;

	}
}

void main()

{
	setlocale(LC_ALL, "Russian");

	cout << "Hello Functions" << endl;

	const int n = 5;
	int arr[n]; 
	FillRand(arr, n);
	cout << endl;
	Print(arr, n);
	cout << endl; 

	int shift;
	cout << "¬ведите количество сдвигов: "; cin >> shift; cout << endl;

	ShiftLeft(arr, n, shift);
	cout << endl;
	Print(arr, n);

	////////////////////////////////////////////////////////////////////////
	cout << "-----------------------------------------------------" << endl;

	const int m = 8;
	int brr[m];

	FillRand(brr, m);
	cout << endl;
	Print(brr, m);
	cout << endl;

	cout << "¬ведите количество сдвигов: "; cin >> shift; cout << endl;

	ShiftLeft(brr, m, shift);
	cout << endl;
	Print(brr, m);
}
