#include "Statistic.h"
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
	return (double)Sum(arr, n) / n;
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
