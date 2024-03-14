#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> arr;
    arr.push_back(11);
    cout << arr.size()<<endl;
    arr.push_back(2);
    cout << arr.size()<<endl;
    arr.push_back(7);
    arr.push_front(4);
    cout << arr.size() << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    cout<<arr.at(1)<<endl;

    for (int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    arr.pop_front();
    for (int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    arr.push_back(9);
    arr.erase(arr.begin(),arr.begin()+2);
    for (int i:arr)
    {
        cout<<i<<" ";
    }
}