#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n, k, min, max;
	cout << "Введите количество элементов в последовательности: " << endl;
	cin >> n;
	cout << "Введите элементы последовательности: " << endl;
	cin >> k;
	max = min = k;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> k;
		if (k > max)
		{
			max = k;
		}
		if (k < min)
		{
			min = k;
		}
	}
	cout << (min + max);
	return 0;
}