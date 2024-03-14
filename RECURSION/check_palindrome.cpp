#include<bits/stdc++.h>
using namespace std;

void check_palindrome(string &s2,int left ,int right)
{
    if (left>right)
    {
        return ;
    }
    
    swap(s2[left],s2[right]);
    check_palindrome(s2,left+1,right-1);
}

int main()
{
    string s1;
    getline(cin,s1);
    int left = 0;
    int right = s1.length()-1;
    string temp = s1;
    check_palindrome(s1,left,right);
    if (temp==s1)
    {
        cout<<"Yes,its palindrome";
    }
    else
    {
        cout<<"No,its not a palindrome";
    }
    
    
    
    
}