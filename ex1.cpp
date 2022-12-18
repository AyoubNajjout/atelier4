#include <iostream>
using namespace std;
// création de la classe complexe
class Complexe
{
public:
    // attributs de la classe
    float re;
    float im;
    // méthodes de la classe complexe
    // la fonction set pour donner les valeurs a "re" et "im"
    void set(float r, float i)
    {
        re = r;
        im = i;
    }
    // définition des opérateurs
    Complexe operator+(Complexe second)
    {
        Complexe c;
        c.im = this->im + second.im;
        c.re = this->re + second.re;
        return c;
    }
    Complexe operator-(Complexe second)
    {
        Complexe c;
        c.im = this->im - second.im;
        c.re = this->re - second.re;
        return c;
    }
    Complexe operator*(Complexe second)
    {
        Complexe c;
        c.re = this->re * second.re - this->im * second.im;
        c.im = this->re * second.im + this->im * second.re;
        return c;
    }
    Complexe operator/(Complexe second)
    {
        Complexe c;
        c.re = (this->re * second.re + this->im * second.im) /
               (second.re * second.re + second.im * second.im);
        c.im = (this->im * second.re - this->re * second.im) /
               (second.re * second.re + second.im * second.im);
        return c;
    }
};
// fonction operation pour choisir une opération
Complexe operation(Complexe first, Complexe second)
{
    Complexe c;
    char op;
    cout << "choisissez votre operation: " << endl;
    cout << "1) somme" << endl;
    cout << "2) soustraction" << endl;
    cout << "3) multiplication" << endl;
    cout << "4) division" << endl;
    cin >> op;
    switch (op)
    {
    case '1':
        c = first + second;
        break;
    case '2':
        c = first - second;
        break;
    case '3':
        c = first * second;
        break;
    case '4':
        c = first / second;
        break;
    }
}
main()
{
    float r, im;
    // premier complexe
    Complexe c1, c2;
    cout << "entrez la partie reelle du premier complexe : ";
    cin >> r;
    cout << "entrez la partie imaginaire du premier complexe : ";
    cin >> im;
    c1.set(r, im);
    // deuxième complexe
    cout << "entrez la partie reelle du deuxieme complexe : ";
    cin >> r;
    cout << "entrez la partie imaginaire du deuxieme complexe : ";
    cin >> im;
    c2.set(r, im);
    // résultat
    Complexe c = operation(c1, c2);
    cout << "le resultat est: " << c.re << " + " << c.im << "i \n";
}
