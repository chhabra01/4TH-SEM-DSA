#include <bits/stdc++.h>
using namespace std;

bool sortarray(int *arr, int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else if (arr[0] > arr[1])
    {
        return 0;
    }
    else
    {
        bool ans = sortarray(arr + 1, n - 1);
        return ans;
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
    if (sortarray(arr, n))
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Not sorted";
    }
    
    
}