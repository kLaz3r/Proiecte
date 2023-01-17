// 64. Sa se scrie o func?ie recursiva care sa determine numarul de cifre egale cu zero ale unui numar natural transmis ca parametru.

#include <iostream>

using namespace std;

int numarulDeZerouri(int numar)
{
    if (numar == 0)
    {
        return 1;
    }
    if (numar <= 9)
    {
        return 0;
    }
    int cifraCurenta = numar % 10;
    int numarulDeZerouriInRestulNumarului = numarulDeZerouri(numar / 10);
    return (cifraCurenta == 0) + numarulDeZerouriInRestulNumarului;
}

int main()
{
    int numar;
    cout << "Introdu numarul: ";
    cin >> numar;
    cout << "Numarul cifrelor de zero este: " << numarulDeZerouri(numar) << endl;
    return 0;
}