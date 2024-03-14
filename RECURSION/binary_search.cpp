#include <bits/stdc++.h>
using namespace std;

bool binary_search(int *arr, int start, int end, int target)
{
    if (start > end)
    {
        return 0;
    }
    int mid = (start+end)/2;
    if (arr[mid] == target)
    {
        return 1;
    }
    if (arr[mid] < target)
    {
        start = mid + 1;
        binary_search(arr, start, end, target);
    }
    else
    {
        end = mid - 1;
        binary_search(arr, start, end, target);
    }
    return 0;
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
    cout << "Enter the target : ";
    cin >> target;
    int start = 0;
    int end = n - 1;
    if (binary_search(arr, start, end, target))
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
}