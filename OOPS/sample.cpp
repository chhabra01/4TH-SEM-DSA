#include <bits/stdc++.h>
using namespace std;

class hero
{

private:
    int health;

public:
    int system;
    char level;

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
    //* STATIC ALLOCATION :
    hero h1;
    h1.sethealth(70);
    h1.setlevel('B');
    cout << "Ramesh ki health : " << h1.gethealth() << endl;
    cout << "Ramesh ka level : " << h1.getlevel()<<endl;

    //* DYNAMIC ALLOCATION :
    {
        hero *b = new hero;
        b->sethealth(90);
        b->setlevel('C');
        cout << "Level is : " << (*b).level << endl;
        cout << "Health is : " << (*b).gethealth() << endl;

        cout << "Level is : " << b->level << endl;
        cout << "Health is : " << b->gethealth()<<endl;
    }
}