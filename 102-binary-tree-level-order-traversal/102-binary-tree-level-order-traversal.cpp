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
    void process(TreeNode* root,int depth){
        if(root==NULL)return;
        if(ans.size()==depth)ans.push_back(vector<int> ());
           
        ans[depth].push_back(root->val);
        process(root->left,depth+1);
        process(root->right,depth+1);
            
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        process(root,0);
        return ans;
    }
};