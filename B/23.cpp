// 23. Eliminarea unei linii dintr-o matrice (fara a folosi o matrice suplimentara)

#include <iostream>

using namespace std;

int main()
{
    int matrice[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int linie;
    cout << "Introdu numarul liniei care va fi eliminata: ";
    cin >> linie;

    for (int i = 0; i < 3; i++)
    {
        matrice[linie - 1][i] = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}