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
     TreeNode* ans;
    int flg=0;
    void solver(TreeNode* root,TreeNode* p,TreeNode* q){
        
        if(root){
            if(root==q || root==p)flg++;
            solver(root->left,p,q);
            solver(root->right,p,q);
        }
    }
    void process(TreeNode* root, TreeNode* p,TreeNode* q){
        if(root){
             flg=0;
            
            solver(root,p,q);
            
           
            if(flg==2)ans=root;
            process(root->left,p,q);
            process(root->right,p,q);
        }
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        process(root,p,q);
       return ans;
    }
};
