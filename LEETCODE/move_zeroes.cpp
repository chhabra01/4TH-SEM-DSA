#include <bits/stdc++.h>
using namespace std;

void move_zeroes(char arr[], int n)
{
    int nonzero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != '#')
        {
            swap(arr[i], arr[nonzero]);
            nonzero++;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the length : ";
    cin >> n;
    char arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    move_zeroes(arr, n);
}