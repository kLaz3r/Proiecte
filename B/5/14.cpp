// 14. Cautarea unei valori date, intr-un vector dat. Minimul unui vector de numere.

#include <iostream>

using namespace std;

int main()
{
    int n, minim = 0;
    int arr[7] = {700, 45, 100, 400, 23, 463, 65645};
    int index = 0;
    cout << "Introdu numarul cautat: ";
    cin >> n;
    for (int i : arr)
    {
        if (n == i)
        {
            cout << n << " gasit la indexul " << index << endl;
        }
        index++;
    }
    for (int j = 0; j < 7; j++)
    {
        if (minim == 0)
        {
            minim = arr[j];
        }
        else if (minim > arr[j])
        {
            minim = arr[j];
        }
    }
    cout << "Valoarea minima din vector este: " << minim << endl;

    return 0;
}