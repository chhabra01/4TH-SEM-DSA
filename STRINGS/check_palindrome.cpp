#include<bits/stdc++.h>
using namespace std;

int find_len(char arr1[])
{
    int count = 0;
    
    int i = 0;
    while (arr1[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
    
}

void reverse_char_array(char arr1[])
{
    int length = find_len(arr1);
    int left = 0;
    int right = length - 1;
    while (left<=right)
    {
        swap(arr1[left],arr1[right]);
        left++;
        right--;
    }
    
}

bool check_palindrome(char arr1[],int n)
{
    int left = 0;
    int right = n - 1;
    while (left<=right)
    {
        if (arr1[left]==arr1[right])
        {
            left++;
            right--;
        }
        
    }
    
}

int main()
{
    char arr1[100];
    cout<<"Enter your name : ";
    cin>>arr1;

    int n = find_len(arr1);

    if (check_palindrome(arr1,n))
    {
        cout<<"Yes its a palindrome";
    }
    else
    {
        cout<<"No its not a palindrome";
    }
    
    


}