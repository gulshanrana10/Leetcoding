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
    bool process(TreeNode* root, long mn,long mx){
        if(!root)return true;
        if(root->val<=mn || root->val>=mx)return false;
      
        return process(root->left,mn,root->val) && process(root->right,root->val,mx);
    }
    bool isValidBST(TreeNode* root) {
        return process(root,LONG_MIN,LONG_MAX);
    }
};