#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    cout<<"Enter the number of rows and columns : ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the elements : ";
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int temp;
    int row;
    int row_index;
    for (int i = 0; i < n ; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum+=arr[i][j];
        }
        if (sum>temp)
        {
            temp = sum;
        }
    }
    cout<<"Largest row-sum is : "<<temp;

}
