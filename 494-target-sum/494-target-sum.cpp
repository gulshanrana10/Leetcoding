class Solution {
public:
    
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int sum=accumulate(nums.begin(),nums.end(),0);
        if ((sum + target) % 2 == 1 || target > sum || target < -sum) return 0;
        sum=(target+sum)/2;
        vector<int> dp(sum+1,0);
        dp[0] = 1;
	for (int i = 0; i < nums.size(); ++i) {
		for (int j = sum; j >= nums[i]; --j) {
			dp[j] += dp[j - nums[i]];
		}
	}
	return dp[sum];
    }
};