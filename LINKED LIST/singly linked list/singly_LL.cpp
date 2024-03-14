#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

public:
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_At_head(node *&head, int d)
{
    //* new node create :
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insert_At_tail(node *&tail, int d)
{
    //* new node create :
    node *temp = new node(d);
    temp->next = temp;
    tail = tail->next;
}

void print(node *&tail)
{
    node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    //* CREATED A NEW NODE :
    node *node1 = new node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    //* HEAD POINTED :
    node *head = node1;
    node *tail = node1;
    print(tail);
    insert_At_tail(tail, 12);
    print(tail);
    insert_At_tail(tail, 15);
    print(tail);
}