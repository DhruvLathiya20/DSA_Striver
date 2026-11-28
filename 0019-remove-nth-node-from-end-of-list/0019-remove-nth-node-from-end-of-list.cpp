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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while(temp != nullptr)
        {
            size++;
            temp = temp->next;
        }   
        int nthNode = size - n + 1;
        int nthPre = 1;
        if(nthNode == 1) return head->next;
        temp = head;
        while(temp != nullptr)
        {
            if(nthPre == nthNode - 1)
            {
                if(temp->next != nullptr)
                {
                    temp->next = temp->next->next;
                    return head;
                }
            }
            nthPre++;
            temp = temp->next;
        }
        return head;
    }
};