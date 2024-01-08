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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL) return head;
        ListNode* tmp=head;
        ListNode* tmp2=tmp->next;
        ListNode* head2=tmp2;
        while(tmp->next!=NULL && tmp2->next!=NULL){
            if(tmp2->next!=NULL){
               tmp->next=tmp2->next;
               tmp=tmp->next; 
            }
            if(tmp->next!=NULL){
                tmp2->next=tmp->next;
                tmp2=tmp2->next; 
            }
        }
        tmp2->next=NULL;
        tmp->next=head2;
        return head;
    }
};
//1-2-3-4-5-6-7