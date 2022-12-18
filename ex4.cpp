#include <iostream>
#include <list>
using namespace std;
void afficher(list<string> malist)
{
    list<string>::iterator i;
    for (i = malist.begin(); i != malist.end(); ++i)
    {
        cout << *i << endl;
    }
}
main()
{
    list<string> p;
    p.push_back("Perrin Geraldine 27 ans");
    p.push_back("Martin Emelie 22 ans");
    p.push_back("Malka Claire 49 ans");
    p.push_back("Dallet Isabelle 35 ans");
    p.push_back("Harzic nathalie 38 ans");
    cout << "la liste triee est:\n\n";
    p.sort();
    afficher(p);
}
