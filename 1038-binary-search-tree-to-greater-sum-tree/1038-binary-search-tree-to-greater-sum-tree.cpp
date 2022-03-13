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
    int as=0;
    void sm(TreeNode* root){
        if(root){
            
            as+=root->val;
        sm(root->left);
        sm(root->right);
        }
    }
    void process(TreeNode* root){
         if(root){
             process( root->left);
             int temp=root->val;
             
          root->val=as;
             as-=temp;
        process( root->right);
    }

    }
    TreeNode* bstToGst(TreeNode* root) {
        sm(root);
   
        process(root);
        return root;
    }
};