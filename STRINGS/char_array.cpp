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

int main()
{
    char arr1[20];
    cout<<"Enter your name : ";
    cin>>arr1;

    cout<<"Your name is : ";
    cout<<arr1;  
    cout<<endl;

    cout<<"Length of array is : ";
    cout<<find_len(arr1);
    cout<<endl;

    cout<<"Reversed array is : ";
    reverse_char_array(arr1);
    cout<<arr1;
}