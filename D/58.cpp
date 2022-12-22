// 58. Scriti o functie recursiva care sa calculeze al n-lea termen al unei progresii aritmetice, dandu-se primul termen si ratia progresiei.

#include <iostream>

using namespace std;

int nProgresieAritmetica(int primulTermen, int ratia, int n)
{
    if (n > 0)
    {
        return ratia + nProgresieAritmetica(primulTermen, ratia, n - 1);
    }
    else
    {
        return primulTermen;
    }
}

int main()
{
    int primulTermen, ratia, n;
    cout << "Introdu primul termen: ";
    cin >> primulTermen;
    cout << "Introdu ratia: ";
    cin >> ratia;
    cout << "Introdu N: ";
    cin >> n;

    cout << "Termenul " << n << " al progresiei aritmetice este: " << nProgresieAritmetica(primulTermen, ratia, n) << endl;
    return 0;
}