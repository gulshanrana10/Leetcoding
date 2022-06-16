/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void process(TreeNode* root,int val,TreeNode* parent){
        if(root){
            if(root->val>val){
                
                process(root->left,val,root);
            }
            else{
                
                process(root->right,val,root);
            }
            
        }
        else{
          TreeNode* temp=new TreeNode();
            temp->val=val;
           
            if(val>parent->val)parent->right=temp;
            else parent->left=temp;
        }
          }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
       if(root==NULL){
           TreeNode* temp=new TreeNode();
            temp->val=val;
           root=temp;
           return root;
       }
        process(root,val,NULL);
        return root;
    }
};