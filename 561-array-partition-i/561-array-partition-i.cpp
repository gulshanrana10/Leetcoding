class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=nums.size();
        int ans=0;
        
        for(int i=0;i<l;i=i+2){
            ans+=nums[i];
        }
        return ans;
    }
};