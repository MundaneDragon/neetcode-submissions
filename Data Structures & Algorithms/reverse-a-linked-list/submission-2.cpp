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
    ListNode* reverseList(ListNode* head) {
        // edge cases - Empty Case
        if (head == nullptr) {
            return nullptr;
        }

        auto cur = head;
        auto prev = static_cast<ListNode*>(nullptr);

        while (cur != nullptr) {
            auto temp = cur;
            cur = cur->next;
            temp->next = prev;
            prev = temp;
        }

        // Last Element
        return prev;
    }
};
