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
    
  
    bool isPalindrome(ListNode* head) {
      string number = "", reverseNumber = "";
    ListNode* travs = head;
    
    while(travs){
        number += to_string(travs->val);
        travs=travs->next;
    }
    
    reverseNumber = number;
    reverse(reverseNumber.begin(), reverseNumber.end());
    
    return (number == reverseNumber);
    }
};