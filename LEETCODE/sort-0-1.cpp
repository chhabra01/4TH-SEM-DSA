#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements (only 0 and 1) : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        while (arr[i] == 0)
        {
            i++;
        }
        while (arr[j] == 1)
        {
            j--;
        }
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}