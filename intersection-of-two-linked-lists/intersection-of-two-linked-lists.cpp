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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> mp;
        ListNode* temp=headA;
        while(temp->next){
            mp[temp]=1;
            temp=temp->next;
        }
        mp[temp]=1;
        temp=headB;
        int flag=0;
        while(temp->next){
            if(mp[temp])return temp;
            mp[temp]=1;
            temp=temp->next;
            
        }
        if(mp[temp])return temp;
        return nullptr;
    }
};