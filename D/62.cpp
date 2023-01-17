// 62. Sa se scrie o func?ie recursiva care sa returneze suma cifrelor unui numar natural transmis ca parametru.

#include <iostream>

using namespace std;

int sumaCifrelor(int numar)
{
    if (numar == 0)
    {
        return 0;
    }

    return (numar % 10 + sumaCifrelor(numar / 10));
}

int main()
{
    int numar;
    cout << "Introdu numarul: ";
    cin >> numar;
    cout << "Suma Cifrelor: " << sumaCifrelor(numar) << endl;
    return 0;
}