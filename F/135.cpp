// 135. Se citeste din date.in triunghiul de numere de mai jos, cu n dat
// 1
// 1 2
// ...
// 1 2 ... n
// Sa se afiseze in date.out triunghiul
// 1 2 ... n
// ...
// 1 2
// 1

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    ifstream fisierIntrare("input.txt");
    fisierIntrare >> n;
    ofstream fisierIesire("output.txt");
    if (!fisierIesire.is_open())
    {
        cout << "nu am putut deschide output.txt" << endl;
        return -1;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            int x;
            fisierIntrare >> x;
            fisierIesire << x << " ";
        }
        fisierIesire << endl;
    }
    fisierIntrare.close();
    fisierIesire.close();
    cout << "Fisier copiat cu succes" << endl;

    return 0;
}