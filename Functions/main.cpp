#include "FillRand.h"
#include "Print.h"
#include "ShiftLeft.h"
#include "ShiftRight.h"
#include "Sort.h"
#include "Statistic.h"
void UnicRandom(int arr[], const int n, int minRand = 50, int maxRand = 100);

int main()

{
	setlocale(LC_ALL, "Russian");

	cout << "Hello Functions" << endl;

	const int n = 5;
	int arr[n]; 
	srand(time(NULL));
	UnicRandom(arr, n);
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

	cout << "Сумма чисел в массиве " << Sum(arr, n) << endl;
	cout << stop << endl;

	cout << "Среднее арифмитическое значение массива: " << Avr(arr, n) << endl;
	cout << stop << endl;
	
	cout << "Максимальное значение в массиве: " << MaxValue(arr, n) << endl;
	cout << stop << endl;

	cout << "Минимальное значение в массиве: " << MinValue(arr, n) << endl;
	cout << stop << endl;
	
	cout << "Сортировка массива по возрастанию: " << endl;
	Sort(arr, n);
	cout << endl;
	Print(arr, n);
}

void UnicRandom(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = minRand + rand()% maxRand;
	}
}

//void Sort_2(int arr[], const int n);
//void Sort_2(int arr[], const int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		
//		for (int j = i+1; i < n; i++)
//		{
//			
//			if (arr [j] < arr [i])
//				{
//				int tempr = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tempr;
//				}
//		}
//
//	}
//}