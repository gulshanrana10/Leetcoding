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
map<int,int> mp;
void process(TreeNode* root){
    if(root){
        mp[root->val]++;
        process(root->left);
        process(root->right);

    }
}
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        int mx=INT_MIN;
        process(root);
        for(auto c:mp){
            mx=max(mx,c.second);
        }
        for(auto c:mp){
            if(c.second==mx)ans.push_back(c.first);
        }
        return ans;
    }
};