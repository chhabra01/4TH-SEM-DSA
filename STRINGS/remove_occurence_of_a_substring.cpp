#include <bits/stdc++.h>
using namespace std;

string remove_occurence(string s, string part)
{
    while (s.length()!=0 && s.find(part)<s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main()
{
    string s;
    cout<<"Enter your string : ";
    getline(cin,s);
    string part;
    cout<<"Enter the part to remove : ";
    getline(cin,part);
    string temp;
    temp = remove_occurence(s,part);
    cout<<temp;
}