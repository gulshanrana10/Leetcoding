/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* r;
    void inorder(TreeNode* root, TreeNode* target ){
        if(root){
            if(target->val==root->val){
            r=root;
        }
        inorder(root->left,target);
        inorder(root->right,target);}
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        inorder(cloned,target);
        return r;
    }
};