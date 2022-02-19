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
    vector<TreeNode*> vec;
    void process(TreeNode* root){
        if(!root)return;
        vec.push_back(root);
        process(root->left);
        process(root->right);
    }
    void flatten(TreeNode* root) {
        if(!root)return;
        process(root);
        
        for(int i=0;i<vec.size()-1;i++){
            vec[i]->right=vec[i+1];
            vec[i]->left=NULL;
        }
        vec[vec.size()-1]->left=vec[vec.size()-1]->right=NULL;
    }
};


