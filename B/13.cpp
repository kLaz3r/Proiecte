// 13. Determinati daca un numar este palindrom (citit de la coada la cap e acelasi numar; exp: 12521)

#include <iostream>

using namespace std;

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

int main()
{
    int n;
    cout << "Introdu numarul: ";
    cin >> n;

    if (n == oglindesteNumarul(n))
    {
        cout << n << " este palindrom" << endl;
    }
    else
    {
        cout << n << " nu este palindrom" << endl;
    }
    return 0;
}