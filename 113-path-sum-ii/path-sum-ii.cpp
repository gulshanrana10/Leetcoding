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
    vector<vector<int>> ans;
    void process(TreeNode* root, int target, int sum, vector<int> tmp){
        if(root){
            sum+=root->val;
            tmp.push_back(root->val);
            if(sum==target && !root->left && !root->right){
                ans.push_back(tmp);
                return;
            }
            process(root->left,target,sum,tmp);
            process(root->right,target,sum,tmp);
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> tmp;
        process(root,targetSum,0,tmp);
        return ans;
    }
};