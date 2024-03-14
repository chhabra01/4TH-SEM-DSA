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
    int pivot = findpivot(arr, n);
    cout << "Pivot element is at : " << pivot;
}