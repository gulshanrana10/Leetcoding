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
    void dfs(TreeNode* root,int depth){
        if(root){            
            mp[depth]=root->val;
            dfs(root->left,depth+1);
            dfs(root->right,depth+1);

        }
    }
    vector<int> rightSideView(TreeNode* root) {
       
        dfs(root,0);
        vector<int> ans;
    for(auto c:mp){
        ans.push_back(c.second);
    }
        return ans;
    }
};