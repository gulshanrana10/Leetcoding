class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> tmp;
        tmp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            tmp.push_back(nums[i]+tmp[i-1]);
        }
        return tmp;
    }
};