/*
206. Reverse Linked List
*/


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p = NULL;
        while(head!=NULL) {
            ListNode* x = head->next;
            head->next = p;
            p = head;
            head = x;
        }
        // p->next = NULL;
        return p;
        }
};