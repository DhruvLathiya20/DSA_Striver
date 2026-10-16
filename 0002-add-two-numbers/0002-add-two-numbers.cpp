class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1 = l1;
        ListNode* head2 = l2;
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        int carry = 0;

        while (head1 != nullptr || head2 != nullptr || carry != 0) {
            int sum = carry;
            if (head1 != nullptr) {
                sum += head1->val;
                head1 = head1->next;
            }
            if (head2 != nullptr) {
                sum += head2->val;
                head2 = head2->next;
            }
            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }
        return head->next;
    }
};
