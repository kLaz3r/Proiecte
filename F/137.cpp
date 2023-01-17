// 137. Se dau fisierele fis1.txt si fis2.txt care contin mai multe caractere. Determinati daca cele doua fisiere au acelasi numar de caractere.

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

    ifstream fisierIntrare2("input2.txt");
    if (!fisierIntrare2.is_open())
    {
        cout << "nu am putut deschide input2.txt" << endl;
        return -1;
    }

    string continut1, continut2;
    string rand;
    while (getline(fisierIntrare, rand))
    {
        continut1 += rand;
    }
    while (getline(fisierIntrare2, rand))
    {
        continut2 += rand;
    }

    if (continut1.length() == continut2.length())
    {
        cout << "Fisierele au acelasi numar de caractere" << endl;
    }
    else
    {
        cout << "Fisierele nu au acelasi numar de caractere" << endl;
    }

    fisierIntrare.close();
    fisierIntrare2.close();

    return 0;
}