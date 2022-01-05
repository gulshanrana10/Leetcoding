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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        if(!head)return head;
        ListNode* temp=head;
        while(temp->next){
            len++;
            temp=temp->next;
            
        }
        
        len++;
        temp=head;
        int stop=len-n-1;
        ListNode* temp1;
        int pt=0;
        if(stop<0)return head->next;
        while(pt!=stop){
            temp=temp->next;
            pt++;
        }
    temp->next=temp->next->next;
        return head;
    }
};