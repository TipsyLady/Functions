#include "FillRand.h"

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = rand() % (maxRand - minRand) + minRand;
		// ������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767
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
		// ������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767
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
		// ������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{

		arr[i] = rand() % 256;
		arr[i] /= 100;
		// ������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767
	}
}
