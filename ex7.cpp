#include <iostream>
#include <list>
#include <iterator>

using namespace std;

// class animal
class animal
{
protected:
    string nom;
    int age;
    string genre;

public:
    // les fonction pour saisir et lire les valeur des attributs
    void set_nom_animal(string n_animal)
    {
        nom = n_animal;
    }
    string get_nom_animal()
    {
        return nom;
    }
    void set_genre(string g)
    {
        genre = g;
    }
    string get_genre()
    {
        return genre;
    }

    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
};

// classe repas
class repas
{
private:
    string nom;
    int heure;
    string description;
    // list de type elments
    list<elments> *lrepas;

public:
    repas()
    {
        lrepas = new list<elments>();
    }
    void set_nom(string n)
    {
        nom = n;
    }
    string get_nom()
    {
        return nom;
    }

    void set_description(string d)
    {
        description = d;
    }
    string get_description()
    {
        return description;
    }

    void set_heure(int h)
    {
        heure = h;
    }
    int get_heure()
    {
        return heure;
    }

    void set_list(list<elments> *lre)
    {
        this->lrepas = lre;
    }

    list<elments> *getlistB()
    {
        return this->lrepas;
    }
    ~repas()
    {
        delete this->lrepas;
    }
};

// class elment
class elments
{
private:
    string nom1;
    string type;
    repas r1; // un variable de type repas
public:
    // des fonction pour saisir et lire les attributs du classe
    void set_nom1(string n1)
    {
        nom1 = n1;
    }
    string get_nom1()
    {
        return nom1;
    }

    void set_type(string t)
    {
        type = t;
    }
    string get_type()
    {
        return type;
    }

    void set_repas(repas re)
    {
        r1 = re;
    }
    repas get_repas()
    {
        return r1;
    }
};

// classe chat qui herite de la classe animal
class chat : public animal
{
private:
    string type;
    // attribut de type classe repas
    repas chats;

public:
    void sautez()
    {
        cout << "sauter";
    }
    void set_repas11(repas re11)
    {
        this->chats = re11;
    }
    repas get_repas11()
    {
        return this->chats;
    }
};

// classe entraineur
class entraineur
{

private:
    string nom;
    string desciption;
    // liste de type chien
    list<chien> chien1;

public:
    void set_nom_entraineur(string n_entraineur)
    {
        nom = n_entraineur;
    }
    string get_nom_entraineur()
    {
        return nom;
    }
    void set_description_entraineur(string des_entraineur)
    {
        desciption = des_entraineur;
    }
    string get_desription_entraineur()
    {
        return desciption;
    }
    void set_list_chien(list<chien> chien0)
    {
        this->chien1 = chien0;
    }
    list<chien> getlist_chien()
    {
        return this->chien1;
    }
};

// classe race
class race
{
    string specificite;

protected:
    void set_specificite(string spe)
    {
        specificite = spe;
    }
    string get_specificite()
    {
        return specificite;
    }
    void isracehybride()
    {
        cout << "isracehybride" << endl;
    };
};

// classe chien qui hérite de la classe animal et la classe race
class chien : public animal, public race
{
private:
    string taille;
    // liste de type entraineur
    list<entraineur> entraineur1;

public:
    void ischass3()
    {
        cout << "i'am ischass3" << endl;
    };
    void set_taille(string ta)
    {
        taille = ta;
    }
    string get_taille()
    {
        return taille;
    }
    void set_list_entraineur(list<entraineur> entraineur0)
    {
        entraineur1 = entraineur0;
    }
    list<entraineur> getlist_entraineur()
    {
        return entraineur1;
    }
};

// classe competition
class competition
{
private:
    string date;
    string nom;

public:
    int ordre;
    // variable de type de classe entraineur
    entraineur ent;
    // variable de type de classe chien
    chien chien0;

    void set_date(string d)
    {
        date = d;
    }
    string get_date()
    {
        return date;
    }
    void set_nom_competition(string n_comp)
    {
        nom = n_comp;
    }
    string get_nom_competition()
    {
        return nom;
    }
    void set_ordre(int ord)
    {
        ordre = ord;
    }
    int get_ordre()
    {
        return ordre;
    }
    void set_competition_entraineur(entraineur entr)
    {
        ent = entr;
    }
    entraineur get_competition_entraineur()
    {
        return ent;
    }
    void set_competition_chien(chien chi)
    {
        chien0 = chi;
    }
    chien get_competition_chien()
    {
        return chien0;
    }
};
