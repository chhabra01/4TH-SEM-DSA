#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(11);
    cout << arr.capacity();
    arr.push_back(2);
    cout << arr.capacity();
    arr.push_back(7);
    cout << arr.capacity() << endl;
    cout << arr.size() << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    cout<<arr.at(1)<<endl;

    for (int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    arr.pop_back();
    for (int i:arr)
    {
        cout<<i<<" ";
    }
    
}