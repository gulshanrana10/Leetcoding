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
    vector<int> vec;
    int sm(TreeNode* root){
        
        if(!root) return 0;
        return root->val+sm(root->left)+sm(root->right);
    }
  
    void visit(TreeNode* root){
        if(!root) return;
        int a=abs(sm(root->left)-sm(root->right));
        vec.push_back(a);
        visit(root->left);
        visit(root->right);
    }
    int findTilt(TreeNode* root) {
        visit(root);
        int ans=0;
        for(auto x: vec) ans+=x; 
        return ans;
    }
};
