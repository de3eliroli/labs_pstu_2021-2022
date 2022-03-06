﻿#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n, d, j, g, c;
	srand(time(NULL));
	cout << "Размер массива" << endl;
	cin >> n;
	cout << "Задайте минимальную и максимальную границы массива" << endl;
	cin >> c >> g;
	int* a = new int[n];
	cout << "Default sequence:";
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % g + c; g--;
		cout << " " << a[i];
	}
	cout << endl;
	d = n / 2;
	while (d > 0)
	{
		for (int i = 0; i < n - d; i++)
		{
			j = i;
			while (j >= 0 and a[j] > a[j + d])
			{
				swap(a[j], a[j + d]);
				j--;
			}
		}
		d = d / 2;
	}
	cout << "Sorted sequence:";
	for (int i = 0; i < n; i++)
		cout << " " << a[i];
	return 0;
}