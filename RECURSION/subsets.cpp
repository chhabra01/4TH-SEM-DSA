#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &ans, int *arr, vector<int> output, int index,int n)
{
    //* BASE CASE
    if (index>=n)
    {
        return;
    }

    //* EXCLUDE KARTE TIME INDEX K AAGE PUSH KRDO 
    

    
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
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(ans, arr, output, index,n);
}