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
    void process(TreeNode* root, int depth){
        if(root){
            if(depth==ans.size())ans.push_back(vector<int>());
            ans[depth].push_back(root->val);
            process(root->left,depth+1);
            process(root->right,depth+1);
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> anss;
        process(root,0);
        for(auto c:ans){
            double tmp=0;
            for(auto x:c){
            tmp+=x;
            }
            anss.push_back(tmp/c.size());
            
        }
        
        return anss;
    }
};