#include <bits/stdc++.h>
using namespace std;

//! BRUTE FORCE :
// void max_occurance(string s,int n)
// {

//     char ch ='\0';
//     char ch1 ='\0';
//     int max=0;
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (s[i]==s[j])
//             {
//                 count++;
//                 ch = s[i];
//             }

//         }
//         if (count>max)
//         {
//             max=count;
//             ch1=ch;
//         }
//     }

//     cout<<"Max character occured is : "<<ch1;

// }

// int main()
// {
//     string s;
//     cout<<"Enter your string : ";
//     getline(cin,s);
//     int n = s.length();
//     max_occurance(s,n);

// }

//! OPTIMISED SOLUTION :

char Get_max_char_occurence(string s)
{
    int arr[26] = {0};
    // array jisme sab characters ke count honge
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int max_char = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i]>max_char)
        {
            ans = i;
            max_char = arr[i];
        }
        
    }
    int final_ans = ans + 'a';
    return final_ans;
    
}

int main()
{
    string s;
    cout << "Enter your string : ";
    getline(cin, s);
    char sh = Get_max_char_occurence(s);
    cout << sh;
}