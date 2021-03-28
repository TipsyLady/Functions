#include "UnicRand.h"
void UnicRandom(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = minRand + rand() % maxRand;
	}
}
void UnicRandom(double arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = minRand + rand() % maxRand;
	}
}
void UnicRandom(float arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = minRand + rand() % maxRand;
	}
}
void UnicRandom(char arr[], const int n, int minRand)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = minRand + rand() % 257;
	}
}