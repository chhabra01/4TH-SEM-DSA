#include <bits/stdc++.h>
using namespace std;

int findmax(int *arr, int n, int i)
{
    if (i==n-1)
    {
        return arr[i];
    }

    int maxi = findmax(arr, n, i + 1);
    if (arr[i] > maxi)
    {
        return arr[i];
    }
    else
    {
        return maxi;
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
    int i = 0;
    int ans = findmax(arr, n, i);
    cout << ans;
}