#include <iostream>

using namespace std;

int main()
{
    int n, t, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        t = 1;
        for (int j = i; j <= i * 2; j++) {
            t *= j;
        }
        sum += t;

    }
    cout << "Result " << sum;
}