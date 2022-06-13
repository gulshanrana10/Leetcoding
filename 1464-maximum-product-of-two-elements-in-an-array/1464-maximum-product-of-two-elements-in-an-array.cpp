class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=nums.size()-1;
        return (nums[l]-1)*(nums[l-1]-1);
    }
};