/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    vector<int> nums;
    
    Solution(ListNode* head) {
        ListNode* cur = head;
        while (cur){
            nums.push_back(cur->val);
            cur=cur->next;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        return nums[(int) (rand() % nums.size())];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
