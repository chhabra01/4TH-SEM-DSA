#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "vijay";
    m[2] = "kumar";
    m[13] = "chhabra";

    m.insert({5, "Tapasya"});

    cout << "Before erase : " << endl;
    for (auto i : m)
    {
        cout << i.first << " : " << i.second << endl;
    }
    cout << endl;
    cout << m.count(13) << endl;

    m.erase(13);
    cout << endl;

    cout << "After erase : " << endl;
    for (auto i : m)
    {
        cout << i.first << " : " << i.second << endl;
    }

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}