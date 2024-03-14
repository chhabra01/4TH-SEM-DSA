#include<bits/stdc++.h>
using namespace std;

void generate_subset(int *arr,int n,int j,vector<int> &ds)
{
    //!base case
    if (n==j)
    {
        for (int i = 0; i < ds.size(); i++)
        {
            cout<<ds[i]<<" ";
        }
        cout<<endl;
        return;
    }
    //! recursive call

    //*taking the element : 
    ds.push_back(arr[j]);
    generate_subset(arr,n,j+1,ds);
    ds.pop_back();

    // *not taking the element
    generate_subset(arr,n,j+1,ds);
}

int main()
{
    int n;
    cout<<"Enter the length : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int> ds;
    int j=0;
    generate_subset(arr,n,j,ds);   
    
}