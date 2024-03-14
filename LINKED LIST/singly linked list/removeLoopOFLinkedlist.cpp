#include<bits/stdc++.h>
using namespace std;

void removeLoop(node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    node* StartOfLoop = GetstartingNode_inLoopLL(head);
    if (StartOfLoop==NULL)
    {
        return head;
    }
    
    node* temp = startOfLoop;
    while (temp->next != StartOfLoop)
    {
        temp=temp->next;
    }
    temp->next = NULL;    
    return head;
}

int main()
{
      
}