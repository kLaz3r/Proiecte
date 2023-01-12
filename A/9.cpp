// 9. Se citeste in mod repetat un caracter pana la intalnirea caracterului ".". (solutie posibila: switch, coduri ascii)
// Sa se afiseze nr de vocale, nr de consoane. Se ignora spatiul

#include <iostream>

using namespace std;

int main()
{
    int vocale = 0, consoane = 0;
    char k;
    bool punct = false;
    while (!punct)
    {
        cin >> k;
        switch (int(k))
        {

        case 97:
        case 101:
        case 105:
        case 111:
        case 117:
            cout << "Vocala" << endl;
            vocale++;
            break;
        case 46:
            cout << "Punct" << endl;
            punct = true;
            break;
        case 32:
            break;
        default:
            cout << "Consoana" << endl;
            consoane++;
            break;
        }
    }

    cout << "Vocale: " << vocale << endl;
    cout << "Consoane: " << consoane << endl;

    return 0;
}