// 57. Aceeasi problema pt aranjamente de n luate cate k, combinari de n luate cate k.

#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return n;
    }
}

int aranjamente(int n, int k)
{
    return factorial(n) / factorial(n - k);
}

int combinari(int n, int k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main()
{
    int n, k;
    cout << "Introdu N: ";
    cin >> n;
    cout << "Introdu K: ";
    cin >> k;
    cout << "Aranjamente: " << aranjamente(n, k) << endl;
    cout << "Combinari: " << combinari(n, k) << endl;
    return 0;
}