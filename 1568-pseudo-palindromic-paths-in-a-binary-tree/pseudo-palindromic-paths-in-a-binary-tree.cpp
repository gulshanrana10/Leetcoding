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
   
    void process(TreeNode* root,int p){
        if(root){
           p^=(1<<root->val);
            if(root->left==NULL && root->right==NULL){
                if((p & (p-1))==0)ans++;
            }            
            process(root->left,p);
            process(root->right,p);
            
        }
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        process(root,0);
        return ans;
    }
};