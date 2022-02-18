/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)return head;
        map<ListNode*,int> mp;
        ListNode* temp=head;
        while(temp->next){
            if(mp[temp]==1)return temp;
            mp[temp]=1;
            temp=temp->next;
        }
        if(mp[temp]==1)return temp;
        return NULL;
    }
};