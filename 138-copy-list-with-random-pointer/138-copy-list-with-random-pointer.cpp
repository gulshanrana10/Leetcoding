/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
      

    // add your logic here
	if(head==NULL)return NULL;
	map<Node*,Node*> mp;
	
	Node* temp=head;
	while(temp->next!=NULL){
		Node* r=new Node(temp->val);
		mp[temp]=r;
		temp=temp->next;
	}
	Node* r=new Node(temp->val);
	mp[temp]=r;
	temp=head;
	Node* ans=mp[head];
	
	while(temp->next!=NULL){
		mp[temp]->random=mp[temp->random];
		mp[temp]->next=mp[temp->next];
		temp=temp->next;
	}
	mp[temp]->random=mp[temp->random];
		mp[temp]->next=mp[temp->next];
	return ans;
}
    
};