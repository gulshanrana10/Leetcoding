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
    vector<int> q;
    
    void process(TreeNode* root){
        if(root){
            q.push_back(root->val);
            process(root->left);
            process(root->right);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        process(root);
            sort(q.begin(),q.end());
            return q[k-1];
            
    }
};