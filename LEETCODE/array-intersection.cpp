#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the length for first array : ";
    cin >> n;
    int arr1[n];
    cout << "Enter the length for second array : ";
    cin >> m;
    int arr2[m];

    cout << "Enter the elements for first array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements for second array : ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout << "Intersection: ";
    int i = 0, j = 0;
    for (; i < n && j < m;)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}