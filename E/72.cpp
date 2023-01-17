// 72. Se citeste un text. Sa se capitalizeze prima litera a fiecarui cuvant.

#include <iostream>

using namespace std;

int main()
{
    string text;
    cout << "Introdu textul: ";
    getline(cin, text);
    if (text[0] >= 'a' && text[0] <= 'z')
        text[0] = text[0] - 32;
    for (int i = 1; i < text.length(); i++)
    {
        if (text[i] == ' ' && (text[i + 1] >= 'a' && text[i + 1] <= 'z'))
        {
            text[i + 1] = text[i + 1] - 32;
        }
    }
    cout << "Textul capitalizat: " << text << endl;
    return 0;
}