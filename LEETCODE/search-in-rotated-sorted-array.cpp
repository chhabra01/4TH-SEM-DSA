#include <bits/stdc++.h>
using namespace std;

int findpivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + ((end - start) / 2);

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + ((end - start) / 2);
    }
    return start;
}

int binarysearch(int arr[], int s, int e, int target)
{
    int start = s;
    int end = e;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int findposition(int arr[], int n, int k)
{
    int pivot = findpivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarysearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarysearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    int n;
    cout << "Enter the length : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    int pos = findposition(arr,n,target);
    cout<<"The position of "<<target<<" is : "<<pos;
}