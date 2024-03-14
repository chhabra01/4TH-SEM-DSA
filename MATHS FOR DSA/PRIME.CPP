#include<bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
    
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if (check_prime(n))
    {
        cout<<"Yes , It\'s a prime number : ";
    }
    else
    {
        cout<<"No , It\'s not a prime number : ";
    }
    
    
}