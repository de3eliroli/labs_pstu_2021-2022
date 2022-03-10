#include <iostream>

using namespace std;

int main()
{
	int n = 10;
	int stakan = 0;
	int a[10] = { 9, 5, 2, 18, 28, 64, 4, 0, 10, 12 };
	for (int i = 0; i <= n - 1; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int j = 1; j < n; j++)
	{
		stakan = a[j];
		int i = j - 1;
		while (i >= 0 && a[i] > stakan)
		{
			a[i + 1] = a[i];
			i--;
		}
		a[i + 1] = stakan;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}