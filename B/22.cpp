// 22. Produsul a doua matrici

#include <iostream>

using namespace std;

void inmultesteMatrici(int matriceA[3][3], int matriceB[3][3], int matriceRezultat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriceRezultat[i][j] = matriceA[i][j] * matriceB[i][j];
        }
    }
}

int main()
{
    int matriceA[3][3] = {
        {2, 5, 7},
        {7, 8, 4},
        {9, 6, 10}};
    int matriceB[3][3] = {
        {5, 8, 6},
        {8, 1, 9},
        {2, 7, 3}};
    int matriceRezultat[3][3];
    inmultesteMatrici(matriceA, matriceB, matriceRezultat);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriceRezultat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}