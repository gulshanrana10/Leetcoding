class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1,flag=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) product=product*nums[i];
            else flag++;
        }
        for(int i=0;i<nums.size();i++){
            if(flag>0){
                if(nums[i]!=0)ans.push_back(0);
                else{
                    if(flag==1) ans.push_back(product);
                    else ans.push_back(0);
                }
                }
            else ans.push_back(product/nums[i]);
        }
        return ans;
    }
};