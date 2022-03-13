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
    int ans=0;
 
    int sumEvenGrandparent(TreeNode* root) {
        if(root){
            if(root->val%2==0){
                if(root->left)if(root->left->left)ans+=(root->left->left->val);
                if(root->left)if(root->left->right)ans+=(root->left->right->val);
                if(root->right)if(root->right->left)ans+=(root->right->left->val);
                if(root->right)if(root->right->right)ans+=(root->right->right->val);}
            sumEvenGrandparent(root->left);
            sumEvenGrandparent(root->right);
        }
        return ans;
    }
};