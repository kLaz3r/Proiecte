// 134. Copierea linie cu linie a unui fisier text (dat): initial.txt intr-un alt fisier cu nume indicat- de exemplu: copie.txt (ambele fisiere=in aceeasi cale)

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fisierInitial("input.txt");
    if (!fisierInitial.is_open())
    {
        cout << "nu pot deschide input.txt" << endl;
        return -1;
    }
    ofstream fisierCopiat("output.txt");
    if (!fisierCopiat.is_open())
    {
        cout << "nu pot deschide output.txt" << endl;
        return -1;
    }
    string rand;
    while (getline(fisierInitial, rand))
    {
        fisierCopiat << rand << endl;
    }
    fisierInitial.close();
    fisierCopiat.close();
    cout << "Fisier copiat cu succes" << endl;
    return 0;
}