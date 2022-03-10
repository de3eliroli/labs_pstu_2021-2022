#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int stakan = 0;
    int a[10] = { 7, 30, 100, 9, 17, 45, 10, 90, 67, 3 };

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                stakan = a[j];
                a[j] = a[j + 1];
                a[j + 1] = stakan;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}