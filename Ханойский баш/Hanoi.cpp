#include <iostream>

using namespace std;

void move_step(char point1, char point2)
{
	cout << "снять со стержня " << point1 << "нацепить на стержень " << point2 << endl;

void moving_step(int num, char point1, char point2, char point3)
{
	if (num != 0) и 
	{
		moving_step(num - 1, point1, point3, point2);
		move_step(point1, point2); 
		moving_step(num - 1, point3, point2, point1);
	}
}

int main()

{
	setlocale(LC_ALL, "rus");
	int num;
	cout << "Введите количество колец: " << endl;
	cin >> num;
	moving_step(num, 'A', 'B', 'C'); 
	return 0;

}