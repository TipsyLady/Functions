#include <iostream>
using namespace std;
#define tab "\t"
#define stop "-----------------------------------------------"

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = rand()%10;
		// функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767
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

void ShiftRight(int arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n-1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;

	}
}

void Sort(int arr[], const int n)
{
	for (int i = 1; i < n; i++)
	{
		int tmp = arr[i];
		int k = i - 1;

		while (k >= 0 && arr[k] > tmp)
		{
			arr[k + 1] = arr[k];
			arr[k] = tmp;
			k--;
		}
	}
}

int Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

double Avr(int arr[], const int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	double Average = sum / n;
	return Average;
}

int MaxValue(int arr[], const int n)
{
	int max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

int MinValue(int arr[], const int n)
{
	int min = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}


void main()

{
	setlocale(LC_ALL, "Russian");

	cout << "Hello Functions" << endl;

	const int n = 5;
	int arr[n]; 
	FillRand(arr, n);
	cout << endl;
	cout << "Вывод массива: " << endl;
	Print(arr, n);
	
	cout << endl;
	int shift;
	cout << "Введите количество сдвигов: "; cin >> shift; cout << endl;

	//cout << "Смещение значений массива влево: " << endl;
	////ShiftLeft(arr, n, shift);
	////cout << endl;
	////Print(arr, n);

	cout << "Смещение значений массива вправо: " << endl;
	ShiftRight(arr, n, shift);
	cout << endl;
	Print(arr, n);
	cout << endl;
	cout << stop << endl;

	int Res = Sum(arr, n);
	cout << "Сумма чисел в массиве " << Res << endl;
	cout << stop << endl;

	double Res2 = Avr(arr, n);
	cout << "Среднее арифмитическое значение массива: " << Res2 << endl;
	cout << stop << endl;
	
	int Res3 = MaxValue(arr, n);
	cout << "Максимальное значение в массиве: " << Res3 << endl;
	cout << stop << endl;

	int Res4 = MinValue(arr, n);
	cout << "Минимальное значение в массиве: " << Res4 << endl;
	cout << stop << endl;
	
	cout << "Сортировка массива по возрастанию: " << endl;
	Sort(arr, n);
	cout << endl;
	Print(arr, n);
}
