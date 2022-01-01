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
    bool hasCycle(ListNode *head) {
        int flag=0;
        unordered_map<ListNode*,int> mp;
        ListNode* temp=head;
        if(!head)return false;
        while(temp->next){
           if(mp[temp])return true;
            mp[temp]=1;
            
            temp=temp->next;
        }
        if(mp[temp])return true;
        return false;
    }
};