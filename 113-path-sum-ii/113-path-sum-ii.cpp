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
    vector<vector<int>> temp;
    void process(TreeNode* root,vector<int> tempo){
       
        if(root){
             
            tempo.push_back(root->val);
            process(root->left,tempo);
            process(root->right,tempo);
            if(!root->left && !root->right)temp.push_back(tempo);
        }
       
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> tempo;
        process(root,tempo);
        for(auto x:temp){
            if(accumulate(x.begin(),x.end(),0)==targetSum)ans.push_back(x);
        }
        return ans;
    }
};