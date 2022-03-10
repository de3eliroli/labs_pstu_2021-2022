#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n = 10;
	int a[10];
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] < a[i - 1])
		{
			flag = false;
			break;
		}
		if (a[i] > a[i - 1])
		{
			flag = true;
		}
	}
	if (flag)
	{
		cout << "Последовательность упорядочена";
	}
	else
	{
		cout << "Не упорядочена";
	}
	return 0;
}