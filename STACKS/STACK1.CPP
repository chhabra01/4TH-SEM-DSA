#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int size;
    int *arr;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = ele;
        }
        else
        {
            cout << " Stack overflow";
        }
    }

    int pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << " Stack underflow";
        }
    }

    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << " Stack is empty";
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(7);

    st.pop();

    cout << st.peek()<<endl;
    st.pop();

    cout << st.peek()<<endl;
     st.pop();

    if (st.isempty())
    {
        cout<<"Stack is full";
    }
    else
    {
        cout<<"Stack has space";
    }
    
    
}