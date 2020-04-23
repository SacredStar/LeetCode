#include <vector>
#include <string>
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;


struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {};
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> vec;
        for (auto l : lists)
        {
            if (l == NULL) {
                continue;
            }
            while (l->next != NULL) {
                vec.push_back(l->val);
                l = l->next;
            }
            vec.push_back(l->val);
        }
        ListNode* head = NULL;
        sort(vec.begin(), vec.end(), std::greater<int>());
        for (auto v : vec) {
            ListNode* node = new ListNode(v);
            node->next = head;
            head = node;
        }
        return head;

    }
};



void main() {

}

