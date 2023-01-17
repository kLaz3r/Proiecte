// 136. Atasati la sfarsitul unui fisier dat, continutul sau si afisati-l.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fisierIntrare("input.txt");
    if (!fisierIntrare.is_open())
    {
        cout << "nu am putut deschide input.txt" << endl;
        return -1;
    }

    string continut, rand;
    while (getline(fisierIntrare, rand))
    {
        continut += rand + "\n";
    }

    ofstream fisierIesire("output.txt", ios::app);
    if (!fisierIesire.is_open())
    {
        cout << "nu am putut deschide output.txt" << endl;
        return -1;
    }

    fisierIesire << continut;

    fisierIntrare.close();
    fisierIesire.close();

    ifstream fisierIntrare2("input.txt");
    if (!fisierIntrare2.is_open())
    {
        cout << "nu am putut deschide input.txt" << endl;
        return -1;
    }
    string rand2;
    cout << "Continutul fisierului este: " << endl;
    while (getline(fisierIntrare2, rand2))
    {
        cout << rand2 << endl;
    }
    fisierIntrare2.close();
    return 0;
}