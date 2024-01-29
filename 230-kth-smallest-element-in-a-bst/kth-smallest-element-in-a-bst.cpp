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
    void dfs(TreeNode* root, int &p,int k){
        if(root){
           
            dfs(root->left,p,k);
             if(p==k)ans=root->val;
            p=p+1;
            dfs(root->right,p,k);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        int p=1;
        dfs(root,p,k);
        return ans;

    }
};