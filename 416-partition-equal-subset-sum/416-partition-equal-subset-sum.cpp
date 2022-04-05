class Solution {
public:
    
    bool process(vector<int> nums,int sum,int i){
        if(sum==0)return true;
        if(i<0 || sum<0)return false;
        if(sum>=nums[i]){
            return process(nums,sum-nums[i],i-1)|| process(nums,sum,i-1);
        }
        else return process(nums,sum,i-1);
    }
    
    bool canPartition(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0)return false;
        sum/=2;
        vector<vector<bool>> adj(nums.size(),vector<bool>(sum+1, false));
        for(int i=0;i<adj[0].size();i++){
            adj[0][i]=false;
        }
        for(int i=0;i<adj.size();i++){
            adj[i][0]=true;
        }
        for(int i=1;i<adj.size();i++){
            for(int j=1;j<adj[0].size();j++){
                
                if(j>=nums[i]){
                    adj[i][j]=adj[i-1][j-nums[i]]|| adj[i-1][j];
                }
                
                else adj[i][j]=adj[i-1][j];
            }
        }
        
        return adj[nums.size()-1][sum];
    }
};