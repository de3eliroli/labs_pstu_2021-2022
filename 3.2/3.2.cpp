#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int minIDX = 0;
    int stakan = 0;
    int a[10] = { 7,6,9,30,21,3,0,15,18,100 };
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        minIDX = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIDX])
            {
                minIDX = j;
            }
        }
        stakan = a[minIDX];
        a[minIDX] = a[i];
        a[i] = stakan;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}