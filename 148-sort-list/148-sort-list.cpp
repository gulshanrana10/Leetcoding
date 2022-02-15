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
    ListNode* sortList(ListNode* head) {
        vector<int> vec;
        if(!head)return head;
        ListNode* temp=head;
        while(temp->next){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        vec.push_back(temp->val);
        sort(vec.begin(),vec.end());
        int i=0;
        temp=head;
        while(temp->next){
            temp->val=vec[i];
            i++;
            temp=temp->next;
        }
        temp->val=vec[i];
        return head;
    }
};