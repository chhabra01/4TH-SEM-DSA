#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int arr_count = 0;
    int total_count = 0;
    // vector<int> ans;
    int n = nums.size();
    for (int i = 1; i <= n; i++)
    {
        total_count += i;
    }
    for (int i = 0; i < n; i++)
    {
        arr_count += nums[i];
    }
    int ans = total_count - arr_count;
    return ans;
}

int main()
{
    vector<int> nums={9,6,7,5,2,4,0,1,3};
    int ans = missingNumber(nums);
    cout<<ans;
}