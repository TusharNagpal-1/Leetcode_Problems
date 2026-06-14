class Solution {
public:
    int sizeofll(ListNode* head){
        ListNode* temp = head;
        int c = 0;
        while(temp != nullptr){
            c++;
            temp = temp->next;
        }
        return c;
    }

    ListNode* reversell(ListNode* head, int y){
        ListNode* t = head;

        for(int i = 0; i < y; i++){
            t = t->next;
        }

        ListNode* pre = nullptr;
        ListNode* curr = t;

        while(curr != nullptr){
            ListNode* next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }

        return pre;  // return head of reversed second half
    }

    int sum(ListNode* head, ListNode* t2){
        ListNode* t1 = head;
        int ans = INT_MIN;

        while(t2 != nullptr){
            ans = max(ans, t1->val + t2->val);
            t1 = t1->next;
            t2 = t2->next;
        }

        return ans;
    }

    int pairSum(ListNode* head) {
        int x = sizeofll(head);

        ListNode* secondHalf = reversell(head, x/2);

        return sum(head, secondHalf);
    }
};