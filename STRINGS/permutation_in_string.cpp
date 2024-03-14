#include<bits/stdc++.h>
using namespace std;

bool permutation_string(string s1,string s2)
{
    string s3 = reverse(s2.begin(),s2.end());
    int n = max(s1.length(),s2.length());
    for (int i = 0; i < n; i++)
    {
        if ((s1[i]+s1[i+1]==s3[i]+s3[i+1]) || (s1[i]+s1[i+1]==s2[i]+s2[i+1]))
        {
            return true;
        }
        
    }
    return false;
    
}

int main()
{
    string s1;
    cout<<"Enter the first string : ";
    getline(cin,s1);
    string s2;
    cout<<"Enter the second string : ";
    getline(cin,s2);   
    if (permutation_string(s1,s2))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    
      
}