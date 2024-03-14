#include <bits/stdc++.h>
using namespace std;

int binarysearch(int target)
{
    int start = 0;
    int end = target;
    int mid = start + ((end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if ((mid * mid) == target)
        {
            return mid;
        }
        if ((mid * mid) < target)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

double moreprecision(int target, int precision, int sqrroot)
{
    double factor = 1;
    double ans = sqrroot;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < target; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int target;
    cout << "Enter the number : ";
    cin >> target;
    double sqrroot = binarysearch(target);
    cout << "Square root of " << target << " is " << moreprecision(target, 3, sqrroot);
}