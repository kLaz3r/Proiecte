// 4. Determinarea si afisarea maximului a 3 numere date

#include <iostream>

using namespace std;

double maxim(double a, double b, double c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    cout << "Introdu A: ";
    cin >> a;
    cout << "Introdu B: ";
    cin >> b;
    cout << "Introdu C: ";
    cin >> c;
    cout << "Maximul numerelor introduse este: " << maxim(a, b, c);
    return 0;
}