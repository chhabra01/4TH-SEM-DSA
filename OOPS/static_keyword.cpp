#include <bits/stdc++.h>
using namespace std;

class hero
{
public:
    static int timeTocomplete;
};

int hero::timeTocomplete = 6;

int main()
{
    cout << hero::timeTocomplete << endl;

    hero h1;
    cout << h1.timeTocomplete << endl;

    hero h2;
    h2.timeTocomplete = 11;
    cout << h2.timeTocomplete << endl;
    cout << h1.timeTocomplete << endl;
}