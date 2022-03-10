#include <iostream>

using namespace std;

int main()
{
	int n, k, z;

	setlocale(LC_ALL, "Rus");
	cin >> n;
	cin >> z;
	while (n > 0)
	{
		k = n % 10;
		if (z == k)
		{
			cout << "Да, входит.";
			break;
		}
		n = n / 10;
	}

}