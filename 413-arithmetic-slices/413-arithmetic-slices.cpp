class Solution {
public:

    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans=0;
        if(nums.size()<=2) return 0;
        for(int i=0;i<nums.size()-1;i++){
            int temp=nums[i+1]-nums[i];
            int flag=0;
            for(int j=i+2;j<nums.size();j++){
                
                  if(nums[j]-nums[j-1]!=temp){
                      flag=1;
                      break;
                    
                  }
                ans++;
            }
          
        }
        return ans;
    }
};