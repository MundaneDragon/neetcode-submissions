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

        // recursive step

        auto newHead = head;
        if (head->next != nullptr) {
            newHead = reverseList(newHead->next);
            head->next->next = head;
            head->next = nullptr;
        }
        // More than 0 Elements
        return newHead;
    }
};
