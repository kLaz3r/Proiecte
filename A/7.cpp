// 7. Afisati urmatoarele triunghiuri de numere (se folosesc doua instructiuni repetitive)
// a.
// 1
// 1 2
// ...
// 1 2 ... n

// b.
// n... 3 2 1
// ...
// 3 2 1
// 2 1
// 1
// c.
//       1
//     1 2 1
//  .....
// 1 2 3..n...3 2 1

#include <iostream>

using namespace std;

void triunghiA(int n)
{
    int pozitie = 1;
    cout << "Triunghi A:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= pozitie; j++)
        {
            cout << j;
        }
        cout << endl;
        pozitie++;
    }
}

void triunghiB(int n)
{
    int pozitie = n;
    cout << "Triunghi B:" << endl;
    for (int i = n; i >= 1; i--)
    {
        for (int j = pozitie; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        pozitie--;
    }
}

void triunghiC(int n)
{
    int pozitie = 1;
    cout << "Triunghi C:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= pozitie; j++)
        {
            cout << j;
        }
        for (int j = pozitie - 1; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
        pozitie++;
    }
}
int main()
{
    int n;
    cout << "Introdu N:";
    cin >> n;
    triunghiA(n);
    triunghiB(n);
    triunghiC(n);
    return 0;
}