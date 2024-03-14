#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int lastocc(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the length: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements (sorted): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int first = firstocc(arr, n, target);
    int last = lastocc(arr, n, target);

    // if (first != -1 && last != -1)
    // {
        cout << "First Index of " << target << " is " << first << endl;
        cout << "Last Index of " << target << " is " << last;
    // }
    // else
    // {
    //     cout << "Target not found in the array.";
    // }

    return 0;
}
