// #include <bits/stdc++.h>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAthead(node *&head, int d)
// {
//     node *temp = new node(d);
//     temp->next = head;
//     head = temp;
// }

// void print(node *&head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void insert_At_tail(node *&tail, int d)
// {
//     node *temp = new node(d);
//     tail->next = temp;
//     tail = tail->next;
// }

// void insertAtposition(node *&head,node* &tail, int position, int d)
// {
//     if(position==1)
//     {
//         insertAthead(head,d);
//         return;
//     }
//     node *temp = head;
//     int count = 1;

//     while (count < position - 1)
//     {
//         temp = temp->next;
//     }

//     if (temp->next==NULL)
//     {
//         insert_At_tail(tail,d);
//         return;
//     }
    

//     node *nodeToinsert = new node(d);
//     nodeToinsert->next = temp->next;
//     temp->next = nodeToinsert; 
// }

// int main()
// {
//     node *node1 = new node(10);
//     node *head = node1;
//     node *tail = node1;
//     insertAthead(head, 12);
//     print(head);
//     insertAthead(head, 34);
//     print(head);
// }