#include <iostream>
#include <cmath>
#include <stdarg.h> 

using namespace std;

int kvadr(int k, ...)
{

    int Ci;
    double coren;
    int s = 0;
    int kol = 0;
    va_list param;  
    va_start(param, k);  
    for (int i = 0; i < k; i++)
    {
        Ci = va_arg(param, int);
        coren = sqrt(Ci); 
        if (coren == (int)coren) 
        {
            kol++;
        }
    }
    va_end(param);
    return kol;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "Кол-во заданных числе = (3) =>" << "  " << kvadr(3, 6, 9, 16) << endl; 
    cout << "Кол-во заданных числе = (7) =>" << "  " << kvadr(7, 4, 2, 7, 16, 9, 9, 16) << endl;
    cout << "Кол-во заданных числе = (11) =>" << "  " << kvadr(11, 6, 9, 16, 4, 2, 7, 16, 9, 9, 16, 12) << endl;
}