#include <bits/stdc++.h>
using namespace std;

int peakmountain(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + ((end - start) / 2);

        if (arr[mid] < arr[mid + 1])
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
    int peak = peakmountain(arr, n);
    cout << "Peak element is at : " << peak;
}