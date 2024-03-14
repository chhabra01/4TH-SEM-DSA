#include<bits/stdc++.h>
using namespace std;

void rotate_array(int arr[],int n,int k)
{
    for (int i = 0; i < k; i++)
    {
        swap(arr[i+n-k],arr[i]);
    }
    
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
    int k;
    cout<<"Enter the number of rotations : ";
    cin>>k;

    rotate_array(arr,n,k);
    cout<<"Rotated array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}