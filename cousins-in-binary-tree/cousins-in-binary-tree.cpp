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
    int flag=0;
    vector<pair<int,int>> vec;
    void process(TreeNode* root,int x,int level, int parent){
        if(!root) return;
       level+=1;
        if(root->val==x) {
            vec.push_back({level,parent});
            return;}
        
        process(root->left,x,level,root->val);
        process(root->right,x,level,root->val);
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        process(root,x,0,-1);
        process(root,y,0,-1);
        if(vec[0].first==vec[1].first && vec[0].second!=vec[1].second) return true;
        return false;
    }
};



