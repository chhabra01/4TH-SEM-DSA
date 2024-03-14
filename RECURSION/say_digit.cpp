#include <bits/stdc++.h>
using namespace std;

void saysdigit(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n /= 10;

    saysdigit(n, arr);

    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    saysdigit(n, arr);
}