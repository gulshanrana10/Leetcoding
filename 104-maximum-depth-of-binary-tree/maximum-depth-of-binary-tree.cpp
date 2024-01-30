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
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        queue<pair<TreeNode*, int>> q;
        int ans=0;
        q.push({root,0});
        while(!q.empty()){
            ans++;
            int l=q.size();
            for(int i=0;i<l;i++){
            TreeNode* tmp=q.front().first;
            int dist=q.front().second;
            q.pop();
            if(tmp->left!=NULL)q.push({tmp->left,dist+1});
            if(tmp->right!=NULL)q.push({tmp->right,dist+1});
            }
        }
        return ans;
    }
};
/*
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
 /*
class Solution {
public:
int ans=0;
    void process(TreeNode* root, int depth){
        if(root){
            process(root->left,depth+1);
            process(root->right,depth+1);
            ans=max(ans,depth);
        }
    }
    int maxDepth(TreeNode* root) {
        process(root,1);
        return ans;
    }
};
*/