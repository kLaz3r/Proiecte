// 5. Program care afiseaza calculul urmatoarelor expresii (n=dat, ^="la puterea"; toate se fac cu o singura repetitie: while sau for sau do...while)
//         a. P=1*4*7*...*(3*n-2)
// 	b. S=1*2+2*3+3*4+...+n*(n+1)
// 	c. S=1+(1*2)+(1*2*3)+...+(1*2*3*...*n)
// 	d. P=(2n-1)!

#include <iostream>

using namespace std;

unsigned long long factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return n;
    }
}

unsigned long long functiaA(int n)
{
    unsigned long long p = 1;
    for (int i = 1; i <= 3 * n - 2; i += 3)
    {
        p = p * i;
    }
    return p;
}

unsigned long long functiaB(int n)
{
    unsigned long long s = 0;
    for (int i = 1; i <= n * (n - 1); i++)
    {
        s += i * (i + 1);
    }
    return s;
}

unsigned long long functiaC(int n)
{
    unsigned long long s = 0;
    int sT;
    for (int i = 1; i <= n; i++)
    {
        sT = 0;
        for (int j = 1; j <= i; j++)
        {
            s += j;
            sT += j;
        }
    }
    return s;
}
unsigned long long functiaD(int n)
{
    return factorial(2 * n - 1);
}

int main()
{
    int n;
    cout << "Introdu valoarea lui N: ";
    cin >> n;

    cout << "Produsul A: " << functiaA(n) << endl;
    cout << "Suma B: " << functiaB(n) << endl;
    cout << "Suma C: " << functiaC(n) << endl;
    cout << "Produsul D: " << functiaD(n) << endl;

    return 0;
}