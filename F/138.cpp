// 138. Se da fisierul text numere.txt care contine pe primul r�nd o valoare naturala nenula n (n<=10000) si pe al doilea r�nd n valori �ntregi de cel mult 4 cifre separate prin unul sau mai multe spatii.
// Se cere sa se calculeze suma elementelor impare de pe al doilea r�nd din fisier.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fisierIntrare("numere.txt");
    if (!fisierIntrare.is_open())
    {
        cout << "nu am putut deschide numere.txt" << endl;
        return -1;
    }

    int n;
    fisierIntrare >> n;

    int suma = 0;

    int x;
    for (int i = 0; i < n; i++)
    {
        fisierIntrare >> x;
        if (x % 2 != 0)
        {
            suma += x;
        }
    }

    cout << "suma numerelor impare este: " << suma << endl;

    fisierIntrare.close();

    return 0;
}