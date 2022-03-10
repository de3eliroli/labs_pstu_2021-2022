#include <iostream>

using namespace std;

int main()
{
	float a, b, c, d, x1, x2;

	setlocale(LC_ALL, "Rus");
	cout << "У нас есть уравнение вида ax^2+bx+c=0" << endl;
	cout << "Введите коэффициенты уравнения: " << endl;
	cin >> a >> b >> c;
	d = pow(b, 2) - 4 * a * c;
	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (a * 2);
		x2 = (-b - sqrt(d)) / (a * 2);
		cout << "Уравнение имеет корни: " << x1 << " и " << x2;
	}
	if (d == 0)
	{
		x1 = -b / (a * 2);
		cout << "Уравнение имеет один корень, так как дискриминант равен 0, корень : " << x1;
	}
	if (d < 0)
	{
		cout << "Уравнение не имеет корней";
	}

	return 0;
}