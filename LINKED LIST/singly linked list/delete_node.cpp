#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    //* CONSTRUCTOR :
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //* DESTRUCTOR :
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data : " << value << endl;
    }
};

void insert_At_head(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insert_At_tail(node *&tail, int d)
{
    node *temp3 = new node(d);
    temp3->next = tail;
    tail = temp3;
}

void insert_At_position(node *&tail, node *&head, int position, int d)
{
    //* INSERTING AT START/HEAD :
    if (position == 1)
    {
        insert_At_head(head, d);
        return;
    }

    node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    //* INSERTING AT LAST/TAIL :
    if (temp->next == NULL)
    {
        insert_At_tail(tail, d);
        return;
    }
    //* CREATING A NEW NODE :
    node *nodeToinsert = new node(d);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}

void deletenode(int position, node *&head)
{
    //* DELETING FIRST NODE :
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        //? MEMORY FREE KARWADO FIRST WALE KI :
        temp->next = NULL;
        delete temp;
    }
    //* DELETING ANY MIDDLE OR LAST NODE :
    else
    {
        node *curr = head;
        node *prev = NULL;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(node *&head)
{
    node *temp2 = head;
    while (temp2 != NULL)
    {
        cout << temp2->data << " ";
        temp2 = temp2->next;
    }
    cout << endl;
}

int main()
{
    //*CREATED A NEW NODE :
    node *node1 = new node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    //* HEAD POINTED TO NODE1 :
    node *head = node1;
    node *tail = node1;
    print(head);
    insert_At_head(head, 12);
    print(head);
    insert_At_head(head, 40);
    print(head);
    insert_At_head(head, 5);
    print(head);
    insert_At_position(tail, head, 3, 22);
    print(head);
    cout << endl;
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    deletenode(2,head);
    print(head);
}