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
    vector<string> ans;
    
    void process(TreeNode* root, string s){
        if(!root) {
          
            return;}
        if(!root->left && !root->right) { s+="->" + to_string(root->val);ans.push_back(s);}
        
        s+="->" + to_string(root->val);
        process(root->left,s);
        process(root->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s;
        if(!root){
            
            return ans;
        }
        if(!root->left && !root->right){
            ans.push_back(to_string(root->val));
            return ans;
        } 
        process(root->left,to_string(root->val));
        process(root->right,to_string(root->val));
        return ans;
    }
};