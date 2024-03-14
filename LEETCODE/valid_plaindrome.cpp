#include <bits/stdc++.h>
using namespace std;

bool validcharacter(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char to_lower(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool check_palindrome(string a)
{
    int n = a.length();
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        if (a[left] != a[right])
        {
            return 0;
        }
        else
        {
            left++;
            right--;
        }
    }
}

int main()
{
    string str;
    cout << "Enter your string : ";
    getline(cin, str);
    int n = str.length();
    int i = 0;
    string temp = "";
    for (int j = 0; j < n; j++)
    {
        if (validcharacter(str[j]))
        {
            temp.push_back(str[j]);
        }
    }
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = to_lower(temp[j]);
    }

    if (check_palindrome(temp))
    {
        cout<<"Yes , 'It\'s a palindrome";
    }
    else
    {
        cout<<"No , 'It\'s not a palindrome";
    }
    
    
}