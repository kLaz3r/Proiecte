// 63. Sa se scrie o func?ie recursiva care sa returneze cifra maxima a unui numar natural transmis ca parametru.

#include <iostream>

using namespace std;

int cifraMaxima(int numar)
{
    if (numar <= 9)
    {
        return numar;
    }
    int cifraCurenta = numar % 10;
    int cifraMaximaInRestulNumarului = cifraMaxima(numar / 10);
    return max(cifraCurenta, cifraMaximaInRestulNumarului);
}

int main()
{
    int numar;
    cout << "Introdu numarul: ";
    cin >> numar;
    cout << "Cifra maxima a numarului este: " << cifraMaxima(numar) << endl;
    return 0;
}