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
    ListNode* findKthNode(ListNode* temp, int k) {
        k -= 1;
        while (temp != nullptr && k > 0) {
            k--;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* reverseLL(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* current = head;

        while (current != nullptr) {
            ListNode* front = current->next;
            current->next = pre;

            pre = current;
            current = front;
        }
        return pre;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* preLast = nullptr;

        while (temp != nullptr) {
            ListNode* kthNode = findKthNode(temp, k);

            if (kthNode == nullptr) {
                if (preLast != nullptr) {
                    preLast->next = temp;
                }
                break;
            }

            ListNode* nextNode = kthNode->next;
            kthNode->next = nullptr;

            reverseLL(temp);

            if (temp == head) {
                head = kthNode;
            } else {
                preLast->next = kthNode;
            }

            preLast = temp;
            temp = nextNode;
        }
        return head;
    }
};