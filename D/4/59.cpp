// 59. Analog 58, progresia geometrica.

#include <iostream>

using namespace std;

unsigned long long nProgresieGeometrica(int primulTermen, int ratia, int n)
{
    if (n > 1)
    {
        return ratia * nProgresieGeometrica(primulTermen, ratia, n - 1);
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

    cout << "Termenul " << n << " al progresiei geometrice este: " << nProgresieGeometrica(primulTermen, ratia, n) << endl;
    return 0;
}