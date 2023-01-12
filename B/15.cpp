#include <iostream>
using namespace std;

int main()
{
    int a[3], b[3], produsulScalar = 0;
    cout << "Introdu elementele primului vector: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    cout << "Introdu elementele celui de al doilea vector: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        produsulScalar += a[i] * b[i];
    }
    cout << "Produsul scalar al celor doi vectori este: " << produsulScalar << endl;
    return 0;
}