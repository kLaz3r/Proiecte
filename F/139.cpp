// 139. Fisierul
// intro.txt contine doua linii. Pe prima linie este scris un numar natural  nenul n, (5<n<10).
// Pe  cea  de- a doua linie a fisierului sunt scrise n numere �ntregi separate prin c�te un spatiu, formate fiecare din cel mult 4 cifre, reprezent�nd un sir de n numere �ntregi.
// Sa se scrie un program in care sa afiseze pe ecran, �n linie, valorile absolute ale numerelor din sir, separate prin c�te un spatiu;

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fisierIntrare("intro.txt");
    if (!fisierIntrare.is_open())
    {
        cout << "nu am putut deschide intro.txt" << endl;
        return -1;
    }

    int n;
    fisierIntrare >> n;

    int x;
    for (int i = 0; i < n; i++)
    {
        fisierIntrare >> x;
        cout << abs(x) << " ";
    }

    fisierIntrare.close();

    return 0;
}