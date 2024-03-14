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
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j]==target)
            {
                cout<<"The element is present at index : [ "<<i<<" , "<<j<<" ]";
            }
            
        }
    }
   

}