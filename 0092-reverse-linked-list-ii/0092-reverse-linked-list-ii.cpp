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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* pre = dummy;

        for (int i = 1; i < left ; i++) {
            pre = pre->next;
        }

        ListNode* current = pre->next;

        for (int i = 0; i < right - left; i++) {
            ListNode* front = current->next;

            current->next = front->next;
            front->next = pre->next;
            pre->next = front;
        }
        head = dummy->next;
        delete dummy;

        return head;
    }
};