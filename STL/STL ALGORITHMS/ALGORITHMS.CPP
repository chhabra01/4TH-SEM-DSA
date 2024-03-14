#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(9);
    v.push_back(12);
    v.push_back(18);

    cout << binary_search(v.begin(), v.end(), 12) << endl;

    cout << lower_bound(v.begin(), v.end(), 12) - v.begin() << endl;

    cout << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 4;
    int b = 75;

    cout << min(a, b) << " " << max(a, b) << endl;
    //! SWAP :
    swap(a, b);

    cout << a << " " << b << endl;

    string s = "saksham";
    //! REVERSE :
    reverse(s.begin(), s.end());
    cout << s << endl;

    cout << "Before rotate : ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    //! ROTATE :
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "After rotate : ";
    for (int i : v)
    {
        cout << i << " ";
    }cout<<endl;
    //! SORT :

    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
}
