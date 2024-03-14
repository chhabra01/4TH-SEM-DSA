#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string& word)
{
    string temp = word;
    int left = 0;
    int right = word.length()-1;
    while (left <= right)
    {
        swap(word[left++], word[right--]);
    }
    if (temp == word)
    {
        return 1;
    }
    return 0;
    
}

int main()
{
    string words[5]={"av","shy","racecare","systum","engineering"};
    string palindrome ="";
    for (int i = 0; i < 5; i++)
    {
        if (ispalindrome(words[i]))
        {
            palindrome=words[i];
            break;
        }
        
    }
    cout<<palindrome;
    
}