#include <bits/stdc++.h>
using namespace std;

int numberjodo(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    return arr[0] + numberjodo(arr + 1, size - 1);
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
    int temp = numberjodo(arr, n);
    cout << temp;
}