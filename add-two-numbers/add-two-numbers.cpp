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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* temp=new ListNode();
        ListNode* result=temp;
        
        while(temp1->next && temp2->next){
          
            int res=temp1->val+temp2->val+carry;
            temp1=temp1->next;
            temp2=temp2->next;
           
            carry=res/10;
            res=res%10;
            ListNode* ans=new ListNode(res);
            temp->next=ans;
            temp=temp->next;
          
        }
         int res=temp1->val+temp2->val+carry;
         carry=res/10;
         res=res%10;
        ListNode* ans=new ListNode(res);
        temp->next=ans;
        temp=temp->next;
        //carry
       // cout<<carry<<temp1->next->val;
        if(temp1->next) {
            temp1=temp1->next;
            while(temp1->next){
            int res=temp1->val+carry;
            temp1=temp1->next;
                   
            carry=res/10;
            res=res%10;
            ListNode* ans=new ListNode(res);
            temp->next=ans;
            temp=temp->next;}
          
        
        res=temp1->val+carry;
         carry=res/10;
         res=res%10;
         ans=new ListNode(res);
        temp->next=ans;
        temp=temp->next;
        }
    
        if(temp2->next) {
            temp2=temp2->next;
            while(temp2->next){
            int res=temp2->val+carry;
            temp2=temp2->next;
                   
            carry=res/10;
            res=res%10;
            ListNode* ans=new ListNode(res);
            temp->next=ans;
            temp=temp->next;}
          
        
        res=temp2->val+carry;
         carry=res/10;
         res=res%10;
         ans=new ListNode(res);
        temp->next=ans;
        temp=temp->next;
        }
            if(carry){
            ans=new ListNode(carry);
        temp->next=ans;
        temp=temp->next;
            temp->next=NULL;
        }
        return result->next;
    }
};