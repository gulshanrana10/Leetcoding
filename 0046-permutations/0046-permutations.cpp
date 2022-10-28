class Solution {
public:
    vector<vector<int>> ans;
 
    void perm(vector<int> &nums, vector<vector<int>> &ans, int i){
        
        if(i>=nums.size()){
       
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
         perm(nums,ans,i+1);
         swap(nums[i],nums[j]);
           
         }
    }
    vector<vector<int>> permute(vector<int>& nums) {

        perm(nums,ans,0);
        return ans;
    }
};