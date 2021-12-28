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
    int ans=-1;
    int height(TreeNode* root){
        if(!root) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void process(TreeNode* root){
        if(!root)return;
        ans=max(ans,(1+height(root->left)+height(root->right)));
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
     
          process(root);
        return ans-1;
    }
};