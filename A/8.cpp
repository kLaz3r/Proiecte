// 8. Se citesc n numere, n dat (fara a folosi vectori). Sa se afiseze minimul

#include <iostream>

using namespace std;

int main()
{
    int n, k, minim;
    cout << "Introdu N:";
    cin >> n;
    minim = n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Introdu K:";
        cin >> k;
        if (k <= minim)
        {
            minim = k;
        }
    }
    cout << "Minim: " << minim << endl;
    return 0;
}