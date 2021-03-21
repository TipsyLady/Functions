#include <iostream>
using namespace std;
#define tab "\t"
#define stop "-----------------------------------------------"
void FillRand(int arr[], const int n, int minRand=0, int maxRand=10);
void FillRand(double arr[], const int n, int minRand=0, int maxRand=10);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 10);
void FillRand(char arr[], const int n, int minRand=0, int maxRand=10);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);

void ShiftLeft(int arr[], const int n, const int shift);
void ShiftLeft(double arr[], const int n, const int shift);
void ShiftLeft(float arr[], const int n, const int shift);
void ShiftLeft(char arr[], const int n, const int shift);

void ShiftRight(int arr[], const int n, const int shift);
void ShiftRight(double arr[], const int n, const int shift);
void ShiftRight(float arr[], const int n, const int shift);
void ShiftRight(char arr[], const int n, const int shift);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);

//void Sort_2(int arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
char Sum(char arr[], const int n);

double Avr(int arr[], const int n);
double Avr(double arr[], const int n);
float Avr(float arr[], const int n);
char Avr(char arr[], const int n);

int MaxValue(int arr[], const int n);
double MaxValue(double arr[], const int n);
float MaxValue(float arr[], const int n);
char MaxValue(char arr[], const int n);

int MinValue(int arr[], const int n);
double MinValue(double arr[], const int n);
float MinValue(float arr[], const int n);
char MinValue(char arr[], const int n);

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

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}

void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}

void Print(char arr[], const int n)
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

void ShiftLeft(double arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;

	}
}

void ShiftLeft(float arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		float buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;

	}
}

void ShiftLeft(char arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[0];
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
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;

	}
}

void ShiftRight(double arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;

	}
}

void ShiftRight(float arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		float buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;

	}
}

void ShiftRight(char arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[n - 1];
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

void Sort(double arr[], const int n)
{
	for (int i = 1; i < n; i++)
	{
		double tmp = arr[i];
		int k = i - 1;

		while (k >= 0 && arr[k] > tmp)
		{
			arr[k + 1] = arr[k];
			arr[k] = tmp;
			k--;
		}
	}
}

void Sort(float arr[], const int n)
{
	for (int i = 1; i < n; i++)
	{
		float tmp = arr[i];
		int k = i - 1;

		while (k >= 0 && arr[k] > tmp)
		{
			arr[k + 1] = arr[k];
			arr[k] = tmp;
			k--;
		}
	}
}

void Sort(char arr[], const int n)
{
	for (int i = 1; i < n; i++)
	{
		char tmp = arr[i];
		int k = i - 1;

		while (k >= 0 && arr[k] > tmp)
		{
			arr[k + 1] = arr[k];
			arr[k] = tmp;
			k--;
		}
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

int Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

double Sum(double arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

float Sum(float arr[], const int n)
{
	float Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

char Sum(char arr[], const int n)
{
	char Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

double Avr(int arr[], const int n)
{
	/*double Average = (double)Sum(arr, n) / n;
	return Average;*/
	return (double) Sum(arr, n) / n;
}

double Avr(double arr[], const int n)
{
	/*double Average = (double)Sum(arr, n) / n;
	return Average;*/
	return (double)Sum(arr, n) / n;
}

float Avr(float arr[], const int n)
{
	/*double Average = (double)Sum(arr, n) / n;
	return Average;*/
	return (float)Sum(arr, n) / n;
}

char Avr(char arr[], const int n)
{
	/*double Average = (double)Sum(arr, n) / n;
	return Average;*/
	return (char)Sum(arr, n) / n;
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

double MaxValue(double arr[], const int n)
{
	double max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

float MaxValue(float arr[], const int n)
{
	float max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

char MaxValue(char arr[], const int n)
{
	char max = arr[0];

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

double MinValue(double arr[], const int n)
{
	double min = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

float MinValue(float arr[], const int n)
{
	float min = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

char MinValue(char arr[], const int n)
{
	char min = arr[0];

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