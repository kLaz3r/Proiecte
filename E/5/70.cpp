// 70. Cititi de la tastatura, separate prin Enter, doua siruri de caractere:
// - un sir s de maximum 256 de caractere, care pot fi litere ale alfabetului englez si spatii
// - un sir c de maximum 21 de caractere (litere ale alfabetului englez).
// Inlocuiti in sirul s toate aparitiile sirului c cu un sir de exact aceeasi lungime efectiva cu c, format doar din caractere +, ca in exemplu.
// Sirul s obtinut in urma acestei prelucrari va fi afisat pe ecran. In cazul �n care c nu apare �n s, programul va afisa mesajul NU APARE!
// exemplu: s= "ion ionescu este un escu", c="ion" sfinal="+++ +++escu este un escu".

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // string s = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus molestie purus a neque rhoncus, sed tristique tortor iaculis. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum sit amet augue eget nisl consectetur cursus. Nunc mi morbi.";
    // string c = "abc";
    char s[256];
    char c[21];
    cout << "Introdu sirul S: ";
    cin.getline(s, 256);
    cout << "Introdu sirul C: ";
    cin.getline(c, 21);

    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < strlen(c); j++)
        {
            if (s[i] == c[j])
            {
                s[i] = '+';
            }
        }
    }
    cout << s;

    return 0;
}