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
    int d=0;
    void depth(TreeNode* root,int l){
        if(root){
            d=max(d,l);
            depth(root->left,l+1);
            depth(root->right,l+1);
        }
    }
    void process(TreeNode* root, int l,vector<vector<int>> &ans){
        
        if(root){
            process(root->left,l+1,ans);
           
            ans[l].push_back(root->val);
            process(root->right,l+1,ans);
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {    
        
        depth(root,0);
               
        vector<vector<int>> ans(d+1,vector<int>());
        if(d==0 && !root){ans.resize(0);return ans;}
        process(root,0,ans);
        for(int i=1;i<d+1;i+=2){
            reverse(ans[i].begin(),ans[i].end());
            
        }

        return ans;
        
    }
};