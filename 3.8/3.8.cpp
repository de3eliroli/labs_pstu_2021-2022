#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    for (int j = 9; j >= 0; j--)
    {
        cout << a[j] << " ";
    }
    return 0;
}