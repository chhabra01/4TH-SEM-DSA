#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Saksham");
    s.push("Vijay");
    s.push("Vanita");
    cout << s.size() << endl;
    cout << s.top() << endl;
    cout << s.empty() << endl;
    s.pop();
    cout << s.top() << endl;
}