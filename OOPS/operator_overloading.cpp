#include <bits/stdc++.h>
using namespace std;

class hero
{
public:
    int a, b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(hero &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output : "<<value2-value1<<endl;
    }
};

int main()
{
    hero h1;
    hero h2;
    h1.a = 5;
    h2.a = 11;
    h1 + h2;
}