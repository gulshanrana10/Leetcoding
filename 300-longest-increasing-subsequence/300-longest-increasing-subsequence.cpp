class Solution {
public:
   /* vector<vector<int>> dp;
    int process(vector<int> nums,int i,int current_max,int count){
    if(i==nums.size()-1) return 0;
        
    if(nums[i+1]>current_max){  
        int a=process(nums,i+1,current_max,count); 
        int b=1+process(nums,i+1,nums[i+1],count+1);
        return max(a,b);
        }   
    else return process(nums,i+1,current_max,count);
    
}
       
    int lengthOfLIS(vector<int>& nums) {   
        dp.resize(size(nums), vector<int>(1+size(nums), -1));
        int ans= process(nums,-1,INT_MIN,0);
       
        return ans;
        
        
    }*/
   int lengthOfLIS(vector<int>& nums) {   
     const int size = nums.size();
        if (size == 0) { return 0; } 
        vector<int> dp(size, 1);
        int res = 1;
        for (int i = 1; i < size; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            res = max (res, dp[i]);
        }
        return res;}
};