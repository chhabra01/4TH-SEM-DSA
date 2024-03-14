#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 0;
    if (n == 0)
    {
        return 1;
    }
    int ans = n * (factorial(n - 1));
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << factorial(n);
}