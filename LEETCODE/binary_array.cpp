#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == 1)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < 1)
        {
            start = mid + 1;
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


    int first = firstocc(arr, n);
    cout << "First Index of 1 is " << first << endl;


    return 0;
}
