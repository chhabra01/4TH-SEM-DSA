#include <bits/stdc++.h>
using namespace std;

void invert_storage(int *arr, int n)
{
    int *first = new int[(n / 2) + 1];
    int *second = new int[(n / 2) + 1];
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            first[a++] = arr[i];
        }
        else
        {
            second[b++] = arr[i];
        }
    }
    a = 0;
    b = 0;
    int *third = new int[n];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            third[i] = first[a];
            a++;
        }
        else
        {
            third[i] = second[b];
            b++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }

    delete[] first;
    delete[] second;
    delete[] third;
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
    invert_storage(arr, n);
}