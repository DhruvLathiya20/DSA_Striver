class Solution {
public:

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

    ListNode* reverseEvenLengthGroups(ListNode* head) {

        ListNode* temp = head;
        ListNode* preLast = nullptr;

        int groupSize = 1;

        while (temp != nullptr) {

            // Find actual length of current group
            ListNode* kthNode = temp;

            int count = 1;

            while (count < groupSize && kthNode->next != nullptr) {
                kthNode = kthNode->next;
                count++;
            }

            // Save next group's starting node
            ListNode* nextNode = kthNode->next;

            // Reverse only if actual group length is even
            if (count % 2 == 0) {

                kthNode->next = nullptr;

                reverseLL(temp);

                if (preLast != nullptr) {
                    preLast->next = kthNode;
                }

                // temp was first node before reversal,
                // now it becomes last node
                temp->next = nextNode;

                preLast = temp;
            }
            else {

                // No reversal
                preLast = kthNode;
            }

            temp = nextNode;

            groupSize++;
        }

        return head;
    }
};