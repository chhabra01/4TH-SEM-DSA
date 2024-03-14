// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
//*     typedef ListNode node;
//*private:
//*   node* reverseLL(node* head) {
//*      node* prev = NULL;
//*     node* curr = head;
//*    node* forward = NULL;

//*         while (curr != NULL) {
//*             forward = curr->next;
//*             curr->next = prev;
//*             prev = curr;
//*             curr = forward;
//*         }

//*         return prev;
//*     }

//*     int getlen(node* head)
//*     {
//*         node* temp = head;
//*         int len = 0;
//*         while(temp!=NULL)
//*         {
//*             temp=temp->next;
//*             len++;
//*         }
//*         return len;
//*     }
//* public:
  *  
//*     bool isPalindrome(node* head) {
//*         int len = getlen(head);
//*     node* temp = head;
//*     node* rev = reverseLL(head);
//*     while (len--) {
//*         if (rev->val != temp->val) {
//*             return false;
//*         }
//*         rev = rev->next;
//*         temp = temp->next;
//*     }

//*     return true;
//*     }
//* };


//* class Solution {
//* public:
//*     typedef ListNode node;
//*     bool isPalindrome(node* head) {
//*         node* temp = head;
//*         vector<int> nums;
//*         while(temp!=NULL)
//*         {
//*             nums.push_back(temp->val);
//*             temp = temp->next;
//*         }
//*         int start = 0 ;
//*         int end = nums.size()-1;
//*         bool ischeck = true;
//*         while(start <= end)
//*         {
//*             if(nums[start]!=nums[end])
//*             {
//*                 ischeck = false;
//*             }
//*             else
//*             {
//*                 start++;
//*                 end--;
//*             }
//*         }
//*         return ischeck;
//*     }
//* };


// class Solution {
// public:
//     typedef ListNode node;

//     node* reverseLL(node* head) {
//         node* prev = nullptr;
//         node* curr = head;
//         node* next = nullptr;

//         while (curr != nullptr) {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }

//         return prev;
//     }

//     bool isPalindrome(node* head) {
//         if (head == nullptr || head->next == nullptr) {
//             return true; // An empty list or a list with one element is a palindrome
//         }

//         // Find the middle of the linked list
//         node* slow = head;
//         node* fast = head;

//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         // Reverse the second half of the linked list
//         node* reversedSecondHalf = reverseLL(slow);

//         // Compare the first half with the reversed second half
//         while (reversedSecondHalf != nullptr) {
//             if (head->val != reversedSecondHalf->val) {
//                 return false;
//             }
//             head = head->next;
//             reversedSecondHalf = reversedSecondHalf->next;
//         }

//         return true;
//     }
// };
