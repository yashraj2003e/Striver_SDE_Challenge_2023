
/*
Find the middle of the linked list
*/


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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;

        int i = 0;
        int j =0;

        while(temp!=NULL && temp->next!=NULL) {
            i=i+1;
            j=j+2;
            temp=temp->next->next;
        }

        for(int k=0;k<i;k++) {
            head=head->next;
        }

        return head;
    }
};