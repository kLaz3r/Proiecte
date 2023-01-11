#include <iostream>
#include <cmath>

using namespace std;

// 1. Calculul ariei unui triunghi, dat prin laturile sale (formula lui Heron)

int main()
{
    double a, b, c, p, s;
    cout << "Introdu latura A: ";
    cin >> a;
    cout << "Introdu latura B: ";
    cin >> b;
    cout << "Introdu latura C: ";
    cin >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    if (s != s)
    {
        cout << "Acest triunghi nu exista." << endl;
        return 0;
    }

    cout << "Suprafata triunghiului este: " << s;
    return 0;
}