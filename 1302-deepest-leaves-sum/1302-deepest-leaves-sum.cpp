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
    int depth=0;
    int ans=0;
    void level(TreeNode*root,int h){
        if(root){
            depth=max(h,depth);
            level(root->left,h+1);
            level(root->right,h+1);
        }
    }
    void process(TreeNode*root,int h){
        if(root){
            
            if(h==depth)ans+=root->val;
            process(root->left,h+1);
            process(root->right,h+1);
        }
    }
    int deepestLeavesSum(TreeNode* root) {
        level(root,0);
        process(root,0);
        return ans;
    }
};