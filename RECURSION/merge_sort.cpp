
#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    //? two new arrays :
    int *first = new int[len1];
    int *second = new int[len2];

    //*copy values :
    int main_array_index = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[main_array_index++];
    }
    main_array_index = mid + 1;
    for (int i = 0; i < len1; i++)
    {
        second[i] = arr[main_array_index++];
    }

    //! merge both arrays :
    int i = 0;
    int j = 0;
    main_array_index = start;

    while (i < len1 && j < len2)
    {
        if (first[i] < second[j])
        {
            arr[main_array_index++] = first[i++];
        }
        else
        {
            arr[main_array_index++] = second[j++];
        }
    }
    while (i < len1)
    {
        arr[main_array_index++] = first[i++];
    }
    while (j < len2)
    {
        arr[main_array_index++] = second[j++];
    }

    delete[] first;
    delete[] second;
}

void merge_sort(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    //! base case
    if (start >= end)
    {
        return;
    }

    //! recursive calls

    //*left part me jane ke liye
    merge_sort(arr, start, mid);

    //*right part me jane ke liye
    merge_sort(arr, mid + 1, end);

    //?dono ko merge krna hai:
    merge(arr, start, end);
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
    int start = 0;
    int end = n - 1;
    merge_sort(arr, start, end);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}