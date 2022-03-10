#include <iostream>
using namespace std;
int main()
{
    float x, n;
    float z = 1;
    float s = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        z = z * i;
        if (i != 1)
        {
            x *= x;
        }
        s += (x / z);
    }
    cout << s + 1;
    return 0;
}