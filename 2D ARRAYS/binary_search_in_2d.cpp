#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    cout << "Enter the number of rows and columns : ";
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter the target : ";
    cin >> target;

    int start = 0;
    int end = (n * m) - 1;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        int element = arr[mid / m][mid % m];
        if (element == target)
        {
            cout << "Target is present at index : [ " << mid / m << " , " << mid % m << " ]";
        }
        if (element < target)
        {
            start = mid+1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }

}