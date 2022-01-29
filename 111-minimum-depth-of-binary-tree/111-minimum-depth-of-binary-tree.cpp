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
    int best=INT_MAX;
    void process(TreeNode* root,int d){
       
       
        if(root){
         if(!root->left && !root->right) {
             
            best=min(best,d);
         }
            d++;
            process(root->left,d);
            process(root->right,d);
        }
       
    }
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        process(root,1);
        
        return best;
    }
};