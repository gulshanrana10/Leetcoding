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
    vector<int> a;
    void process(TreeNode* root){
        if(root){
          a.push_back(root->val);
            
            process(root->left);
            process(root->right);
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
        process(root);
       int b=a[0];
        sort(a.begin(),a.end());
        for(auto x:a){
            if(x>b)return x;
        }
        return -1;
    }
};