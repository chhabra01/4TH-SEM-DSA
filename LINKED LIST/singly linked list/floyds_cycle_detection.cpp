// #include<bits/stdc++.h>
// using namespace std;

// node* floyd_detect_loop(node* head)
// {
//     if(head==NULL)
//     {
//         return false;
//     }

//     node* slow = head;
//     node* fast = head;

//     while (slow!=NULL && fast!=NULL)
//     {
//         fast = fast -> next;
//         if(fast!=NULL)
//         {
//             fast = fast -> next;
//         }
        
//         slow = slow->next;
//         if (slow == fast)
//         {
//             return true;
//         }
        
//     }
//     return false;
// }

// int main()
// {
      
// }