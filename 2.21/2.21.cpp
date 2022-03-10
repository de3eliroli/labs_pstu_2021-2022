#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x, i;
	bool flag;
	cin >> x;
	i = x;
	while (x != 0)
	{
		cin >> x;
		if (i > x && x != 0)
		{
			flag = false;
			break;
		}
		else
		{
			flag = true;
			i = x;

		}
	}
	if (flag == true)
	{
		cout << "Числа в последовательности идут по возрастанию";
	}
	else
	{
		cout << "Числа идут не по возрастанию";
	}
	return 0;
}