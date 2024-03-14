#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int *arr, int n)
{
    //?base case
    if (n == 0 || n == 1)
    {
        return;
    }
    //?processing
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    //?recursive call
    bubble_sort(arr, n-1);
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
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}