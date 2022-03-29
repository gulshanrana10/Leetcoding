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
    int sum=0;
    void process(TreeNode* root,int add){
        
        if(root){
            add=add*10+root->val;
            process(root->left,add);
            process(root->right,add);
             if(!root->left && !root->right){
            
            sum+=add;
        }
        }
       
    }
    
    int sumNumbers(TreeNode* root) {
        if(!root)return 0;
        process(root,0);
        return sum;
    }
};