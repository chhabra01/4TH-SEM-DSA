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

    ~node()
    {
        int value = this->data;
        if (next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data "<<value;
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

void insert_At_head(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *node1 = new node(d);
        head = node1;
        tail = node1;
    }
    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insert_At_tail(node *&head, node *&tail, int d)
{
    if (tail == NULL)
    {
        node *node1 = new node(d);
        head = node1;
        tail = node1;
    }
    else
    {
        node *temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insert_At_position(node *&head, node *&tail, int position, int d)
{
    node *temp = head;
    int count = 1;
    if (position == 1)
    {
        insert_At_head(head,tail, d);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insert_At_tail(head,tail, d);
        return;
    }

    //* NODE TO INSERT
    node *nodeToinsert = new node(d);
    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;
}

void deletion(int position,node *&head)
{
    if (position==1)
    {
        node *temp = head;
        temp->next->prev=NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node* curr = head;
        node* prev = NULL;

        int count = 1;
        while (count < position -1 )
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
    
    
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    print(head);
    insert_At_head(head,tail, 21);
    print(head);
    insert_At_head(head,tail, 35);
    print(head);
    insert_At_tail(head,tail, 60);
    print(head);
    insert_At_position(head, tail, 3, 12);
    print(head);
    insert_At_position(head, tail, 1, 2);
    print(head);
    int length = getlen(head);
    cout << length << endl;
}