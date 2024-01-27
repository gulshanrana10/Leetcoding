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
    vector<int> s;
    void dfs(TreeNode* root){
        if(root){
            s.push_back(root->val);
            dfs(root->left);
            dfs(root->right);
        }
}
    int findSecondMinimumValue(TreeNode* root) {
        dfs(root);
        sort(s.begin(),s.end());
      
       for(auto c:s){
           if(c!=s[0])return c;
       }
        return -1;
    }
};