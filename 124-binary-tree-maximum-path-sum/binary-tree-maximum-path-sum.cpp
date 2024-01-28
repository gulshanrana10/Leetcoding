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
    int maxUtil(TreeNode* root, int &res){
        if(!root)return 0;
        int l=maxUtil(root->left,res);
        int r=maxUtil(root->right,res);
        int ms=max(max(l,r)+root->val,root->val);
        res=max(res,max(ms,l+r+root->val));
        return ms;
    }
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        maxUtil(root,res);
        return res;
    }
};