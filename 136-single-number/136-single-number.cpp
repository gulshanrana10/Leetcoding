class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0;
        sort(nums.begin(),nums.end());
        if(nums.size()==1)return nums[0];
       while(i<nums.size()-1){
           if(nums[i]!=nums[i+1])return nums[i];
           i+=2;
       }
        return nums[nums.size()-1];
    }
};