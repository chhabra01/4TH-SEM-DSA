#include <bits/stdc++.h>
using namespace std;

char found_space(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 0;
    }
    return 1;
}

void replace_char(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (found_space(s[i]))
        {
            cout << " @40 ";
        }
        else
        {
            cout << s[i];
        }
    }
}

int main()
{
    string s;
    cout << "Enter you\'r string : ";
    getline(cin, s);
    replace_char(s);
}