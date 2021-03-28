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

double Avr(int arr[], const int n)
{
	/*double Average = (double)Sum(arr, n) / n;
	return Average;*/
	return (double)Sum(arr, n) / n;
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