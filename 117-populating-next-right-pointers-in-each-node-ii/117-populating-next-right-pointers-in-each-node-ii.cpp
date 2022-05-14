/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void traverse(Node* root,int h){
        if(root){mp[root]=h+1;
        traverse(root->left,mp[root]);
        traverse(root->right,mp[root]);}
    }
    map<Node*, int> mp;
    
    
    Node* connect(Node* root){
        if(!root)return root;
        queue<Node*> q;
        vector<Node*> ans;
        traverse(root,0);
        q.push(root);
        while(!q.empty()){
            Node* temp=q.front();
           
            q.pop();
            ans.push_back(temp);
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        for(int i=0;i<ans.size()-1;i++){
            if(mp[ans[i]]!=mp[ans[i+1]])ans[i]->next=NULL;
            else ans[i]->next=ans[i+1];
        }
        return root;
    }
};