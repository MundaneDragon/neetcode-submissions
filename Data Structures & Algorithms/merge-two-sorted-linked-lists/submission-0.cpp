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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        auto cur1 = list1;
        auto cur2 = list2;

        if (cur1 == nullptr) {
            return cur2;
        }

        if (cur2 == nullptr) {
            return cur1;
        }

        auto newList = static_cast<ListNode *>(nullptr);
        if (cur1->val <= cur2->val) {
            newList = cur1;
            cur1 = cur1->next;
        } else {
            newList = cur2;
            cur2 = cur2->next;
        }

        auto newCur = newList;
        while (cur1 != nullptr and cur2 != nullptr) {

            if (cur1->val < cur2->val) {
                newCur->next = cur1;
                cur1 = cur1->next;
            } else {
                newCur->next = cur2;
                cur2 = cur2->next;
            }
            newCur = newCur->next;
        }

        if (cur1 == nullptr) {
            newCur->next = cur2;
        }

        if (cur2 == nullptr) {
            newCur->next = cur1;
        }

        return newList;
    }
};
