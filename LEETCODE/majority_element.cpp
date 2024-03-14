#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n; 
    int a;
    vector<int> nums;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    int count = 0;
    int max = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[i]==nums[j])
            {
                count++;
            }
            
        }
        if (count>max)
        {
            max=count;
            temp=nums[i];
        }
        
    }
    cout<<max;
}