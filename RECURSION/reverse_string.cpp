#include <bits/stdc++.h>
using namespace std;

void reverse_string(string &s2, int left, int right)
{
    if (left > right)
    {
        return;
    }
    swap(s2[left], s2[right]);
    reverse_string(s2, left + 1, right - 1);
}

int main()
{
    string s1;
    getline(cin, s1);
    int left = 0;
    int right = s1.length() - 1;
    reverse_string(s1, left, right);
    cout << s1;
}