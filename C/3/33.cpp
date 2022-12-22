// 33. Rescrieti folosind minim 2 subprograme problemele 1, 5, 6, 10-30 (ceea ce inseamna ca am ajuns la 55 de probleme)

#include <iostream>
#include <cmath>

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
// 1.
double formulaHeron(int a, int b, int c)
{
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    if (s != s)
    {
        return 0;
    }
    else
    {
        return s;
    }
}
// 5.
unsigned long long calculExpresie(int expresie, int n)
{
    unsigned long long s = 0;
    unsigned long long p = 1;
    int sT;
    switch (expresie)
    {
    case 1:
        for (int i = 1; i <= 3 * n - 2; i += 3)
        {
            p = p * i;
        }
        return p;
        break;
    case 2:
        for (int i = 1; i <= n * (n - 1); i++)
        {
            s += i * (i + 1);
        }
        return s;
        break;
    case 3:
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
        break;
    case 4:
        return factorial(2 * n - 1);
    }
}
// 6. Program care afiseaza calculul expresiei (n=dat, ^="la puterea")
// S=1-1/2+1/3-1/4+...(-1)^(n+1)*1/n (for/while/do..while-la alegere, cu if)
double expresie6(double n)
{
    double s = 0;
    double sign;
    // double max = sign * (1 / n);
    for (int i = 1; i <= n; i++)
    {
        sign = pow(-1, i + 1);
        // cout << s << endl;
        s += sign * 1 / i;
    }
    return s;
}

// 10.

int sumaCifrelor(int n)
{
    int suma = 0, m;
    while (n > 0)
    {
        m = n % 10;
        suma += m;
        n = n / 10;
    }
    return suma;
}

int oglindesteNumarul(int n)
{
    int numarulInvers = 0;
    int rest = 0;
    while (n != 0)
    {
        rest = n % 10;
        numarulInvers = numarulInvers * 10 + rest;
        n /= 10;
    }
    return numarulInvers;
}
// 11.
bool prim(int n)
{
    if (n % n == 0 && n % 1 == 0)
    {
        for (int i = n - 1; i > 1; i--)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
// 12.
unsigned long long descompuneInFactoriPrimi(unsigned long long n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n /= 2;
    }
    for (unsigned long long i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }

    if (n > 2)
    {
        cout << n << " ";
    }

    return 0;
}
// 14.
int cautaInVector(int n, int arr[], int arrSize)
{
    int minim = 0;
    int index = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (n == arr[i])
        {
            cout << n << " gasit la indexul " << index << " | ";
        }
        index++;
    }
    for (int j = 0; j < 7; j++)
    {
        if (minim == 0)
        {
            minim = arr[j];
        }
        else if (minim > arr[j])
        {
            minim = arr[j];
        }
    }
    cout
        << "Valoarea minima din vector este: " << minim << endl;
}

int main()
{
    int arr[7] = {700, 45, 100, 400, 23, 463, 65645};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "1. Heron: " << formulaHeron(4, 8, 6) << endl;
    cout << "5. Calcul Expresie(a): " << calculExpresie(1, 10) << endl;
    cout << "5. Calcul Expresie(b): " << calculExpresie(2, 10) << endl;
    cout << "5. Calcul Expresie(c): " << calculExpresie(3, 10) << endl;
    cout << "5. Calcul Expresie(d): " << calculExpresie(4, 10) << endl;
    cout << "6. Calcul Expresie: " << expresie6(10) << endl;
    cout << "10. Suma Cifrelor: " << sumaCifrelor(1069) << endl;
    cout << "10. Oglinditul Numarului: " << oglindesteNumarul(1069) << endl;
    cout << "11. Verifica numarul prim: " << prim(1069) << endl;
    cout << "12. Descompune in factori primi: ";
    descompuneInFactoriPrimi(1500);
    cout << endl;
    cout << "14. Cauta in vector: ";
    cautaInVector(23, arr, arrSize);
    cout << endl;

    return 0;
}
