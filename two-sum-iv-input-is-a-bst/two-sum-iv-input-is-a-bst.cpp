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
    void process(TreeNode* root){
        if(!root) return;
        vec.push_back(root->val);
        process(root->left);
        process(root->right);

        
    }
    bool findTarget(TreeNode* root, int k) {
        process(root);
      int flag=0;
        for(int x=0;x<vec.size()-1;x++){
            for(int y=x+1;y<vec.size();y++){
                if(vec[x]+vec[y]==k) 
                {flag=1;
                break;}
            }
            if(flag==1) break;
        }
        if(flag==1) return true;
        return false;
    }
};