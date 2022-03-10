#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float n, max;
	float lastm = 0;
	float firstm = 0;
	cin >> n;
	max = -1;
	for (float i = 1; i <= n; i++)
	{

		if ((round(sin(n + (i / n)) * 10) / 10) > max)
		{
			max = (round(sin(n + (i / n)) * 10) / 10);
			firstm = i;
		}
		else if ((round(sin(n + (i / n)) * 10) / 10) == max)
		{
			lastm = i;
		}
	}
	cout << "Максимальный элемент последовательности: " << max << endl;
	cout << "Номер первого макс. элемента: " << firstm << endl << "Последнего: " << lastm;
	return 0;

}