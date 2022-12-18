#include <iostream>
using namespace std;
// la fonction DateHeure pour séparer le champs heure de la date
void DateHeure(string &s)
{
    // afficher le nom du mois
    string b = s.substr(2, 2);
    if (b == "01")
        b = "Janvier";
    else if (b == "02")
        b = "Fevrier";
    else if (b == "03")
        b = "Mars";
    else if (b == "04")
        b = "Avril";
    else if (b == "05")
        b = "Mai";
    else if (b == "06")
        b = "Juin";
    else if (b == "07")
        b = "Juillet";
    else if (b == "08")
        b = "Aout";
    else if (b == "09")
        b = "Septembre";
    else if (b == "10")
        b = "Octobre";
    else if (b == "11")
        b = "Novembre";
    else if (b == "12")
        b = "Decembre";
    // afficher 1er si on et dans le premier jour du mois
    string c = s.substr(0, 2);
    if (c == "01")
        c = "1er";
    cout << "Date : " << c << " " << b << " " << s.substr(4, 4) << endl;
    cout << "Heure : " << s.substr(8, 2) << "h" << s.substr(10, 2) << endl;
}
main()
{
    string a("010920091123");
    DateHeure(a);
}
