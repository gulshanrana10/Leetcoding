class Solution {
public:
/*
    int best=0;
    void process(vector<int> ans,vector<int> nums,int i){
        if(i>=nums.size()){
            best=max(best,accumulate(ans.begin(),ans.end(),0));
            return;
        }
        ans.push_back(nums[i]);
        process(ans,nums,i+2);
        ans.pop_back();
            process(ans,nums,i+1);
    }
    int rob(vector<int>& nums) {
        
        vector<int> ans;
      process(ans,nums,0);
    return best;
    }*/
    int rob(vector<int>& nums) {
        vector<int> ans;
        int l=nums.size(); 
        ans.push_back(nums[0]); 
        if(l==1)return nums[0];
        if(l<3)return max(nums[0],nums[1]);
        ans.push_back(max(nums[0],nums[1]));
        for(int i=2;i<l;i++){
            ans.push_back(max(ans[i-1],ans[i-2]+nums[i]));
        }
        return ans[l-1];
    }
};