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
    
    void process(TreeNode* root,map<int,int> &mp){
        if(root==NULL)return;
        mp[root->val]++;
        process(root->left,mp);
        process(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> vec;
        map<int,int> mp;
        process(root,mp);
        int max=INT_MIN;
         for(auto x:mp)
        {
            if(x.second>max)
                max=x.second;
        }
        for(auto x:mp)
        {
            if(x.second==max)
                vec.push_back(x.first);
        }
      
        return vec;
    }
};