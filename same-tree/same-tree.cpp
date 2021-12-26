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
    vector<int> vec1;
    vector<int> vec2;
    void inorder(TreeNode* root, vector<int> &vec){
        
       
        if(root){
        vec.push_back(root->val);
        inorder(root->left,vec);
        
        inorder(root->right,vec);}
        vec.push_back(-1);
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        inorder(p,vec1);
        inorder(q,vec2);
        for(auto x:vec1)cout<<x<<endl;
        for(auto x:vec2)cout<<x<<endl;
        return vec1==vec2;
    }
};