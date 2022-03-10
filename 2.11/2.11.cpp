#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n, k;
	int i = 1;
	bool flag = false;

	cout << "Введите количество элементов последовательности: " << endl;
	cin >> n;
	while (i <= n and !flag)
	{
		cin >> k;
		if (k == 0)
		{
			i++;
		}
		else
		{
			flag = true;
		}
	}
	if (k > 0)
	{
		cout << "Сначала было введено положительное число.";
	}
	else if (k == 0)
	{
		cout << "Не было введено ни положительного, ни отрицательного числа.";
	}
	else
	{
		cout << "Сначала было введено отрицательное число.";
	}
	return 0;
}