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
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* temp1 = list1;
//         ListNode* temp2 = list2;
//         ListNode* head = nullptr;
//         ListNode* pl = nullptr;

//         while (temp1 != nullptr && temp2 != nullptr) {
//             if (temp1->val <= temp2->val) {
//                 ListNode* nextnode = temp1->next;
//                 if (head == nullptr) {
//                     head = temp1;
//                     pl = temp1;
//                 } else {
//                     pl->next = temp1;
//                     pl = temp1;
//                 }
//                 temp1 = nextnode;
//             } else {
//                 ListNode* nextnode = temp2->next;
//                 if (head == nullptr) {
//                     head = temp2;
//                     pl = temp2;
//                 } else {
//                     pl->next = temp2;
//                     pl = temp2;
//                 }
//                 temp2 = nextnode;
//             }
//             if (temp1 != nullptr) {
//                 pl->next = temp1;
//             } else if (temp2 != nullptr) {
//                 pl->next = temp2;
//             }
//         }
//         if (head == nullptr) {
//             return temp1 != nullptr ? temp1 : temp2;
//         }
//         return head;
//     }
// };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while (list1 != nullptr && list2 != nullptr) {

            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } 
            else {
                tail->next = list2;
                list2 = list2->next;
            }

            tail = tail->next;
        }

        if (list1 != nullptr)
            tail->next = list1;
        else
            tail->next = list2;

        return dummy->next;
    }
};