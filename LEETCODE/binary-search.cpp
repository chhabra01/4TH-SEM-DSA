#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int size,int target)
{
    int start = 0;
    int end = size-1;
    int mid = start+((end-start)/2);
    while (start<=end)
    {
        int mid = start+((end-start)/2);

        if (arr[mid]==target)
        {
            return mid;
        }
        if (arr[mid]<target)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        
    }
    return -1;
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
    int index = binarysearch(arr,n,target);
    cout<<"Index of "<<target<<" is "<<index;
    
    
}