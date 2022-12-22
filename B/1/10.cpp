// 10. Se citeste un nr.Sa se afiseze:
// 	a. Suma cifrelor sale
// 	b. Oglinditul numarului (exp: n= 1043, oglinditul: 3401)
#include <iostream>

using namespace std;

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

int main()
{
    int n;
    cout << "Introdu numarul: ";
    cin >> n;

    cout << "Suma cifrelor: " << sumaCifrelor(n) << endl;
    cout << "Oglinditul: " << oglindesteNumarul(n) << endl;

    return 0;
}