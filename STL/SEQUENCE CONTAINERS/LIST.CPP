#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> L;
    // list<int> n(5);
    L.push_back(11);
    L.push_back(4);
    L.push_front(19);
    L.push_front(78);
    cout << L.size() << endl;
    // L.pop_front();
    for (int i : L)
    {
        cout << i << " ";
    }
    cout << endl;
}