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
    
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL or head->next==NULL)return head;
        ListNode* temp=head;
        ListNode* temp1=head->next;
        ListNode* tempo=head;
        int a;
        if(temp1->next==NULL || temp1->next->next==NULL){
             a=temp->val;    
            temp->val=temp1->val;
            temp1->val=a;
            return head;
        }
        while(temp1->next && temp1->next->next){
            a=temp->val;    
            temp->val=temp1->val;
            temp1->val=a;
            //cout<<temp1->val;
            temp=temp1->next;
            temp1=temp1->next->next;
           
        }
      a=temp->val;    
            temp->val=temp1->val;
            temp1->val=a;
        return head;
    }
};