// 73. Rescrieti programele 10 - 70 folosind un fisier de intrare pt datele de intrare, respectiv un fisier de iesire pt rezultate.
// 14. Cautarea unei valori date, intr-un vector dat. Minimul unui vector de numere.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int numar, minim = 0, index = 0;
    int arr[7] = {700, 45, 100, 400, 23, 463, 65645};
    FILE *fptr;

    if ((fptr = fopen("input.txt", "r")) == NULL)
    {
        cout << "Eroare, nu pot deschide fisierul.";
        return 0;
    }
    fscanf(fptr, "%d", &numar);
    fclose(fptr);

    cout << numar;

    if ((fptr = fopen("output.txt", "w")) == NULL)
    {
        cout << "Eroare, nu pot deschide fisierul.";
        return 0;
    }

    for (int i : arr)
    {
        if (numar == i)
        {
            fprintf(fptr, "%d gasit la indexul %d \n", numar, index);
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
    fprintf(fptr, "Valoarea minima din vector este: %d \n", minim);
    fclose(fptr);
    return 0;
}