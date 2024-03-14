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

void insertion(node *&tail, int element, int d)
{
    //* EMPTY LIST :
if (tail == NULL)

    {
        node* newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        //* NON-EMPTY LIST :
        node* curr = tail;

        while (curr->data != element)
        {
            curr= curr->next;
        }
        node*temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
        
    } 
}

void print(node *tail)
{
    node *temp = tail;
   do
   {
    cout<<tail->data<<" ";
    tail = tail->next;
   } while (tail != temp);
   cout<<endl;
}

int main()
{
    node *tail = NULL;
    insertion(tail,5,3);
    print(tail);
    return 0;
}