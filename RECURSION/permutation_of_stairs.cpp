#include<bits/stdc++.h>
using namespace std;

int stairjump(int n)
{
    if (n<0)
    {
        return 0;
    }
    if (n==0)
    {
        return 1;
    }
    return stairjump(n-1)+stairjump(n-2);
}

int main()
{
    int n;
    cin>>n;
    int ans = stairjump(n);  
    cout<<ans;
}