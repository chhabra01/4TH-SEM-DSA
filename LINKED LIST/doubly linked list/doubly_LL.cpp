#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getlen(node *head)
{
    node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insert_At_head(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insert_At_tail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insert_At_position(node *&head, node *&tail, int position, int d)
{
    node *temp = head;
    int count = 1;
    if (position == 1)
    {
        insert_At_head(head, d);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insert_At_tail(tail, d);
        return;
    }

    //* NODE TO INSERT
    node* nodeToinsert = new node(d);
    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);
    insert_At_head(head, 21);
    print(head);
    insert_At_head(head, 35);
    print(head);
    insert_At_tail(tail, 60);
    print(head);
    insert_At_position(head,tail,3,12);
    print(head);
    int length = getlen(head);
    cout << length << endl;
}