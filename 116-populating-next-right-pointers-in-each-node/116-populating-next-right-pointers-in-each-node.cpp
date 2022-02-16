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
    map<Node*,int> level;
    void levelling(Node* root,int h){
        if(root){
            h++;
            level[root]=h;
            levelling(root->left,h);
            levelling(root->right,h);
        }
    }
    Node* connect(Node* root) {
        if(!root)return root;
        vector<Node*> vec;  
        vec.push_back(root);
       queue<Node*> q;    
        q.push(root);
         while(!q.empty()){
            
             Node* temp=q.front();q.pop();
             if(temp->left){ 
                 q.push(temp->left);
             vec.push_back(temp->left);}
            
           if(temp->right){ 
                 q.push(temp->right);
             vec.push_back(temp->right);}
         }
          //next break right peripheral links
        levelling(root,-1);
        for(int i=0;i<vec.size()-1;i++){
            if(level[vec[i]]==level[vec[i+1]])vec[i]->next=vec[i+1];
            else vec[i]->next=NULL;
        }
        
      
        return root;
    }
};