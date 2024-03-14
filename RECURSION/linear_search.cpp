#include<bits/stdc++.h>
using namespace std;

bool linear_search(int *arr,int n,int target)
{
    if (n==0)
    {
        return 0; 
    }
    else if(arr[0]==target)
    {
        return 1;
    }
    linear_search(arr+1,n-1,target);
}

int main()
{
    int n;
    cout<<"Enter the length : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    if (linear_search(arr,n,target))
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
    
    
    
    
}