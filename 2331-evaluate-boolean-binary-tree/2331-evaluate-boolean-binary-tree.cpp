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
    void in_status(TreeNode* root){
        if(root){
            
            in_status(root->left);
            in_status(root->right);
            if(root->left && root->right){
                if(root->val==2)root->val=root->left->val || root->right->val;
            else root->val=root->left->val && root->right->val;}
          
        }
        
    }
    bool evaluateTree(TreeNode* root) {
        in_status(root);
        return root->val;
    }
};




