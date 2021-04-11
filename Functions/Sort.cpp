#include "Sort.h"
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