#include <bits/stdc++.h>
using namespace std;

void counting(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << endl;

    cout << n << " ";
    counting(n - 1);
}

int main()
{
    int n;
    cin >> n;
    counting(n);
}