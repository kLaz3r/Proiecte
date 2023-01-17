#include <iostream>
#include "multimi.h"

using namespace std;

int main()
{

    int arr1[] = {876, 553, 553, 553, 553, 553, 876, 8567, 14, 8567, 6345, 7645, 14};
    int arr2[] = {876, 553, 534, 567};
    // Marimea vectorilor
    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
    // Multimi
    arr1Size = transformaInMultime(arr1, arr1Size);
    arr2Size = transformaInMultime(arr2, arr2Size);
    // Diferenta multimilor
    int arrDiff[arr1Size + arr2Size];
    int arrDiffSize = diferentaMultimilor(arr1, arr1Size, arr2, arr2Size, arrDiff);
    // Produsul Cartezian
    int produsCartezian[arr1Size * arr2Size][2];
    calculeazaProdusulCartezian(arr1, arr1Size, arr2, arr2Size, produsCartezian);
    // Afisarea rezultatelor
    cout << "Multimea 1: ";
    afiseazaVectorul(arr1, arr1Size);
    cout << "Multimea 2: ";
    afiseazaVectorul(arr2, arr2Size);
    cout << "Multimea Diferenta: ";
    afiseazaVectorul(arrDiff, arrDiffSize);
    cout << "Produsul Cartezian: ";
    afiseazaProdusulCartezian(produsCartezian, arr1Size * arr2Size);

    return 0;
}