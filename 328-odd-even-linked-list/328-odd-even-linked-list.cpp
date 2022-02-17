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
        if(!head || !head->next)return head;
        
        ListNode* temp1=head;
        ListNode* temp2=head->next;
        ListNode* temp3=temp2;
       /*
            
        while(temp2->next->next){
            temp1->next=temp2->next;
            temp1=temp1->next;
            if(temp1->next){temp2->next=temp1->next;
            temp2=temp2->next;}
            
            }
        temp1->next=temp2->next;
        temp1=temp1->next;
        if(temp1){
            temp2->next=temp2->next->next;
            temp2=temp2->next;}
     //   temp1->next=temp3;
        return head;*/
        int count=0;
        while(temp1->next){
           count++;
            temp1=temp1->next;
        }
        count++;
        temp1=head;
        vector<ListNode*> vec1;
        if(count%2==0){
        while(temp1->next->next){
            vec1.push_back(temp1);
            temp1=temp1->next->next;
        }
        vec1.push_back(temp1);
        while(temp2->next){
            vec1.push_back(temp2);
            temp2=temp2->next->next;
        }
        vec1.push_back(temp2);
        for(int i=0;i<vec1.size()-1;i++){
            vec1[i]->next=vec1[i+1];
        }
        vec1[vec1.size()-1]->next=NULL;}
        else{
            while(temp1->next){
            vec1.push_back(temp1);
            temp1=temp1->next->next;
        }
        vec1.push_back(temp1);
        while(temp2->next->next){
            vec1.push_back(temp2);
            temp2=temp2->next->next;
        }
        vec1.push_back(temp2);
        for(int i=0;i<vec1.size()-1;i++){
            vec1[i]->next=vec1[i+1];
        }
        vec1[vec1.size()-1]->next=NULL;
        }
        return head;
    }
};