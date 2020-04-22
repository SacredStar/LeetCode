#include <string>
#include <iostream>

using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {};
};

 class Solution {
 public:
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         if (!l1 && !l2)
             return NULL;
         int rem = 0;
         ListNode* t1 = l1, * t2 = l2;
         ListNode* head = NULL, * prev = NULL;
         while (t1 || t2) {
             int sum = rem;
             if (t1)
                 sum += t1->val;
             if (t2)
                 sum += t2->val;
             rem = sum / 10;
             sum %= 10;
             ListNode* tmp = new ListNode(sum);
             if (!head)
                 head = tmp;
             else
                 prev->next = tmp;
             prev = tmp;
             if (t1)
                 t1 = t1->next;
             if (t2)
                 t2 = t2->next;
         }
         if (rem) {
             ListNode* tmp = new ListNode(rem);
             prev->next = tmp;
         }
         return head;
     }
 };