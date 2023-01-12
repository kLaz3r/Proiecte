// 20. Norma unui vector

#include <iostream>
#include <cmath>

using namespace std;

double normaEuclidiana(int arr[], int arrSize)
{
    int suma = 0;
    for (int i = 0; i < arrSize; i++)
    {
        suma += pow(arr[i], 2);
    }
    return sqrt(suma);
}

int main()
{
    int arr[] = {4, 6, 7, 3, 7, 3, 78, 9, 8, 5, 4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Norma euclidiana: " << normaEuclidiana(arr, arrSize) << endl;
    return 0;
}