// 11. Determinati daca un numar "n" dat este prim.
#include <iostream>

using namespace std;

bool prim(int n)
{
    if (n % n == 0 && n % 1 == 0)
    {
        for (int i = n - 1; i > 1; i--)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Introdu numarul natural: ";
    cin >> n;

    if (prim(n))
    {
        cout << "Numarul " << n << " este prim." << endl;
    }
    else
    {
        cout << "Numarul " << n << " nu este prim." << endl;
    }

    return 0;
}