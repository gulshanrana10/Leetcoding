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
    int p=0;
    void process(TreeNode* root,int l,int k){
        if(root){  
            
            process(root->left,l,k);
            ans++;
            if(ans==k)p=root->val;
            if(l==k)ans=root->val;
            process(root->right,l,k);
  
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        process(root,0,k);
        return p;
            
    }
};