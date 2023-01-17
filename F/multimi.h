#ifndef MULTIMI_H
#define MULTIMI_H
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void afiseazaVectorul(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void afiseazaProdusulCartezian(int produsCartezian[][2], int produsCartezianSize)
{
    for (int i = 0; i < produsCartezianSize; i++)
    {
        cout << "( ";
        for (int j = 0; j < 2; j++)
        {
            cout << produsCartezian[i][j] << " ";
        }
        cout << "), ";
    }
}

int transformaInMultime(int arr[], int arrSize)
{
    sort(arr, arr + arrSize);
    if (arrSize == 0 || arrSize == 1)
    {
        return arrSize;
    }
    int tempArr[arrSize];
    int j = 0;
    for (int i = 0; i < arrSize - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            tempArr[j++] = arr[i];
        }
    }
    tempArr[j++] = arr[arrSize - 1];
    for (int i = 0; i < j; i++)
    {
        arr[i] = tempArr[i];
    }
    return j;
}

int diferentaMultimilor(int arr1[], int arr1Size, int arr2[], int arr2Size, int arrDiff[])
{
    int k, i, j;
    int arrDiffSize;
    for (i = 0, k = 0; i < arr1Size; i++)
    {
        for (j = 0; j < arr2Size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                j = arr2Size + 1;
            }
        }
        if (j == arr2Size)
        {
            arrDiff[k++] = arr1[i];
        }
    }
    return k;
}

void calculeazaProdusulCartezian(int arr1[], int arr1Size, int arr2[], int arr2Size, int produsCartezian[][2])
{
    int index = 0;
    for (int i = 0; i < arr1Size; i++)
    {
        for (int j = 0; j < arr2Size; j++)
        {
            produsCartezian[index][0] = arr1[i];
            produsCartezian[index][1] = arr2[j];
            index++;
        }
    }
}

#endif