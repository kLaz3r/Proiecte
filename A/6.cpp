// 6. Program care afiseaza calculul expresiei (n=dat, ^="la puterea")
// S=1-1/2+1/3-1/4+...(-1)^(n+1)*1/n (for/while/do..while-la alegere, cu if)
#include <iostream>
#include <cmath>

using namespace std;

long double suma(int n)
{
    long double rezultat = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << pow(-1, i + 1) * 1 / i << endl;
        rezultat += pow(-1, i + 1) * 1 / i;
    }
    return rezultat;
}

int main()
{
    int n, exponent;

    cout << "Introdu n:";
    cin >> n;

    cout << "Rezultat: " << suma(n) << endl;

    return 0;
}