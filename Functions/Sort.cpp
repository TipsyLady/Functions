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