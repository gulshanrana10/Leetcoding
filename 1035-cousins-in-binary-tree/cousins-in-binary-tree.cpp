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
vector<pair<int,int>> vec;
void process(TreeNode* root,int depth,int x,int parent){
   if(root){
       if(root->val==x)vec.push_back({parent,depth});
       process(root->left,depth+1,x,root->val);
       process(root->right,depth+1,x,root->val);
   }
}
    bool isCousins(TreeNode* root, int x, int y) {
        process(root,0,x,-1);
        process(root,0,y,-1);
        cout<<vec[0].first<<vec[1].first<<vec[0].second<<vec[1].second;
        return (vec[0].first!=vec[1].first)&&(vec[0].second==vec[1].second);
    }
};