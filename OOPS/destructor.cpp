#include <bits/stdc++.h>
using namespace std;

class hero
{
private:
    int health;

public:
    char *name;
    char level;

    hero()
    {
        cout << endl;
        cout << "Constructor called";
        name = new char[100];
    }

    //! COPY CONSTRUCTOR FOR DEEP COPY :
    hero(hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }

    //*SETTERS :
    void sethealth(int h)
    {
        this->health = h;
    }
    void setlevel(char ch)
    {
        this->level = ch;
    }

    //*GETTERS :
    int gethealth()
    {
        return this->health;
    }
    char getlevel()
    {
        return this->level;
    }

    void print()
    {
        cout << endl;
        cout << endl;
        cout << "Health is : " << this->health << endl;
        cout << "Level is : " << this->level << endl;
        cout << "Name is : " << this->name << endl;
        cout << endl;
    }

    void setname(char name[])
    {
        strcpy(this->name, name);
    }

    //* DESTRUCTOR : 
    ~hero()
    {
        cout<<"Destructor called"<<endl;
    }

};

int main()
{
    hero h1;
    h1.sethealth(12);
    h1.setlevel('D');
    char name[8] = "Saksham";
    h1.setname(name);
    h1.print();

    hero h2(h1);
    h2.print();
    h2.name[0] = 'G';
    h2.print();

    h1.print();
}