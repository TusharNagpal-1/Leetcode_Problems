class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode dummy;
        ListNode* curr = &dummy;

        int c = 0;

        while (l1 || l2 || c) {

            int x = (l1 ? l1->val : 0);
            int y = (l2 ? l2->val : 0);

            int value = x + y + c;

            c = value / 10;

            curr->next = new ListNode(value % 10);
            curr = curr->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummy.next;
    }
};