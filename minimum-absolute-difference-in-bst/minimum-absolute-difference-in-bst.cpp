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
    int best=INT_MAX;
    void process(TreeNode* root){
        if(!root)return;
        vec.push_back(root->val);
        process(root->left);
        process(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        process(root);
        for(int i=0;i<vec.size()-1;i++){
            for(int j=i+1;j<vec.size();j++){
                best=min(best,abs(vec[i]-vec[j]));
            }
        }
    return best;
    }
};