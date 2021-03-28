#include <iostream>
using namespace std;
#define tab "\t"
#define stop "-----------------------------------------------"

void FillRand(int arr[], const int n, int minRand=0, int maxRand=10);
void FillRand(double arr[], const int n, int minRand=0, int maxRand=10);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 10);
void FillRand(char arr[], const int n, int minRand=0, int maxRand=10);

template<typename T>void Print(T arr[], const int n);
template<typename T>void ShiftLeft(T arr[], const int n, const int shift);
template<typename T>void ShiftRight(T arr[], const int n, const int shift);
template<typename T>void Sort(T arr[], const int n);
template<typename T>T Sum(T arr[], const int n);
template<typename T>double Avr(T arr[], const int n);
template<typename T>T MaxValue(T arr[], const int n);
template<typename T>T MinValue(T arr[], const int n);

void UnicRandom(int arr[], const int n, int minRand = 50, int maxRand = 100);

void main()

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

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = rand() % (maxRand-minRand)+minRand;
		// функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{

		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		// функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767
	}
}
void FillRand(float arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{

		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		// функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{

		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		// функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767
	}
}

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}
template<typename T>void ShiftLeft(T arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;

	}
}
template<typename T>void ShiftRight(T arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;

	}
}
template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 1; i < n; i++)
	{
		T tmp = arr[i];
		T k = i - 1;

		while (k >= 0 && arr[k] > tmp)
		{
			arr[k + 1] = arr[k];
			arr[k] = tmp;
			k--;
		}
	}
}
template<typename T>T Sum(T arr[], const int n)
{
	T Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
template<typename T>double Avr(T arr[], const int n)
{
	/*double Average = (double)Sum(arr, n) / n;
	return Average;*/
	return (double) Sum(arr, n) / n;
}
template<typename T>T MaxValue(T arr[], const int n)
{
	T max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}
template<typename T>T MinValue(T arr[], const int n)
{
	T min = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

void UnicRandom(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = minRand + rand()% maxRand;
	}
}

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
//void Sort_2(int arr[], const int n);