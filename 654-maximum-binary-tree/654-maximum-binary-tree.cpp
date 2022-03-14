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
    
    TreeNode* process(vector<int> nums,int start, int end){
         if(start>=end )return NULL;
        int ind=start;
        for(int i=start;i<end;i++){
            if(nums[i]>nums[ind]){
                ind=i;
                
            }
        }
               
        TreeNode* root=new TreeNode(nums[ind]);
        root->left=process(nums,start,ind);
        root->right=process(nums,ind+1,end);
        return root;
        

    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
      
        return process(nums,0,nums.size());
        
    }
};