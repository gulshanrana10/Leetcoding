class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane's Algo
        int k=0;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
           k=max(nums[i],k+nums[i]);
            if(k<0)k=nums[i];
            ans=max(ans,k);
        }
        return ans;
    }
};