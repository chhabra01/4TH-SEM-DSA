#include <bits/stdc++.h>
using namespace std;

bool possible_solution(int arr[], int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int allocatebooks(int arr[], int n, int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (possible_solution(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the length : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cout << "Enter the number of students : ";
    cin >> m;
    int answer = allocatebooks(arr, n, m);
    cout << "Answer is : " << answer;
}