class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        if(n==2){
            return nums[1]-nums[0];
        }
        int check;
        if(n%2!=0){
            check=nums[n/2];
        }
        else{
            check=(nums[n/2]+nums[n/2-1])/2;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=abs(check-nums[i]);
        }
        return ans;
    }
};
