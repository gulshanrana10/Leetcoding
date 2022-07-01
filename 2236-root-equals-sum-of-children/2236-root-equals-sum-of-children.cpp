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
    bool ans=true;
    void postorder(TreeNode* root){
        if(!root->left && !root->right)return;
        if(root){
            postorder(root->left);
            postorder(root->right);
            int a=0,b=0;
            if(root->left)a=root->left->val;
            if(root->right)b=root->right->val;
            
         if(root->val!=a+b) ans=false;
            
        }
        
    }
    bool checkTree(TreeNode* root) {
        
        postorder(root);
        return ans;
    }
};