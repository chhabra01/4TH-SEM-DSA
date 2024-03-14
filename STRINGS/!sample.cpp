#include <bits/stdc++.h>
using namespace std;

bool validchar(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return 1;
    }
    return 0;
}

void max_length(string s)
{
    int n = s.length();
    int max = 0;
    int count = 0;
    string temp = "";
    string temp1 = "";
    for (int i = 0; i < n; i++)
    {
        temp = "";
        if (validchar(s[i]))
        {
            temp.push_back(s[i]);
            count++;
        }
        if (count > max)
        {
            max = count;
        }
    }
    cout<<temp;
}

int main()
{
    string s;
    cout << "Enter your string : ";
    getline(cin, s);
    max_length(s);
}