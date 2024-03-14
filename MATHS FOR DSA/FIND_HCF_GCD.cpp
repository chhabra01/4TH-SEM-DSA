#include <bits/stdc++.h>
using namespace std;

//! HCF NIKALNE KA FORMULA : ((A-B),B) OR ((A%B),B).
//! RELATION BETWEEN LCM AND HCF :- LCM(A,B) * GCD(A,B) == A*B.
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        if (b > a)
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter the numbers : ";
    cin >> a >> b;
    cout << gcd(a, b);
}