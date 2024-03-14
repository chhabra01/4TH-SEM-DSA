#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    q.push("vijay");
    q.push("kumar");
    q.push("chhabra");
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
}