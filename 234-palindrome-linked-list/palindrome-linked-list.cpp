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
    int sizeofll(ListNode* head){
        int c=0;
        while(head){
            head=head->next;
            c++;
        }
        return c;
    }
    ListNode* reversell(ListNode* head,int x){
        ListNode* t=head;
        for(int i=0;i<x;i++){
                t=t->next;
        }
        ListNode* t1=t;
        ListNode* pre=nullptr;
        ListNode* curr=t1;
        ListNode* next=nullptr;
        while(curr){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        return pre;
    }
    bool palindrome(ListNode* head,ListNode* temp){
        while(temp){
            if(head->val != temp->val) return false;
            temp=temp->next;
            head=head->next;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        int x=sizeofll(head);
        ListNode* secondl=reversell(head,x/2);
        bool flag =palindrome(head,secondl);
        return flag;
    }
};