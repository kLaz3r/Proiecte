// 3. Indicati valoarea unei functii acolada gen:
// f(x)=x^3-log3(x);x>1
// f(x)=2^x;xe(0,1]
// f(x)=5;x<=0

#include <iostream>
#include <cmath>

using namespace std;

int logAbazaB(int a, int b)
{
    return log2(a) / log2(b);
}

double functie(double x)
{
    double fx;
    if (x > 1)
    {
        fx = pow(x, 3) - logAbazaB(x, 3);
    }
    else if (x > 0 && x <= 1)
    {
        fx = pow(2, x);
    }
    else if (x <= 0)
    {
        fx = 5;
    }
    return fx;
}

int main()
{
    double x;
    cout << "Introdu valoarea lui X: ";
    cin >> x;
    cout << "Rezultat: " << functie(x);

    return 0;
}