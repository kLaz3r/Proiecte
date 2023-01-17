// 71. Se citeste un text scris cu litere mici si spatii. Sa se codifice textul prin �nlocuirea fiecarei litere cu urmatoarea din alfabet, litera �z� �nlocuindu-se cu �a� .
// Ex. ana mere are => bob nfsf bsf

#include <iostream>

using namespace std;

int main()
{
    string text;
    cout << "Introdu textul: ";
    getline(cin, text);

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
        {
            if (text[i] == 'z')
            {
                text[i] = 'a';
            }
            else
            {
                text[i] = text[i] + 1;
            }
        }
    }
    cout << "Textul codificat: " << text << endl;
    return 0;
}