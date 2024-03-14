#include <bits/stdc++.h>
using namespace std;

class hero
{

private:
    int health;

public:
    int system;
    char level;

    //* CONSTRUCTOR DEFAULT WALA :

    hero()
    {
        cout << "System hai bhai";
    }

    //* PARAMETERISED CONTRUCTOS with this keyword:

    hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }

    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    //* COPY CONSTRUCTOR :

    hero (hero& temp)
    {
        cout<<"Copy cosntructor called";
        this->health=temp.health;
        this->level=temp.level;
        cout<<endl;
    }

    void print()
    {
        cout << "level : " << this->level << endl;
        cout << "Health : " << this->health << endl;
    }

    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    hero suresh(70, 'C');
    suresh.print();
    cout << endl;
    hero ritesh(suresh);
    ritesh.print();
    // ritesh.health = suresh.health;
    // ritesh.level = suresh.level;

    //*STATIC :
    // hero ramesh(10);
    // cout << endl;
    // cout << "address of ramesh : " << &ramesh << endl;
    // ramesh.gethealth() endl;
    // ramesh.print();

    //*DYNAMIC :
    // hero *h = new hero;
    // h->print();

    //*ANOTHER STATIC

    // hero temp(10, 'A');
    // temp.print();
}