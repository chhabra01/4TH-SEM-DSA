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

    int left = 0;
    int right = m - 1;
    int top = 0;
    int bottom = n - 1;
    while (left <= right && top <= bottom)
    {
        // Left to right
        for (int j = left; j <= right; j++)
        {
            cout << arr[top][j]<<" ";
        }
        top++;
        // top to bottom;
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right]<<" ";
        }
        right--;

        
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                cout << arr[bottom][j]<<" ";
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}