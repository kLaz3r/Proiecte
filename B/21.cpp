// 21. Determinati daca elementele unui vector formeaza sau nu o progresie geometrica

#include <iostream>

using namespace std;

bool verificaProgresieGeometrica(double arr[], int arrSize)
{
    double ratia = 1;
    bool da = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (i == 0)
        {
            ratia = arr[1] / arr[0];
        }
        else
        {
            if (arr[i] / arr[i - 1] == ratia)
            {
                da = 1;
            }
            else
            {
                da = 0;
            }
        }
    }
    return da;
}

int main()
{
    double arr[] = {1, 3, 9, 27, 81};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Progresie Geometrica: " << verificaProgresieGeometrica(arr, arrSize) << endl;
    if (verificaProgresieGeometrica(arr, arrSize))
    {
        cout << "Ratia: " << arr[1] / arr[0] << endl;
    }
    return 0;
}