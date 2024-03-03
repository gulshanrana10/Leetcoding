class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        int p=*max_element(nums.begin(),nums.end());        
        vector<int> ans;
    for(int i=0;i<n;i++){
        if(nums[i]==p){
            ans.push_back(-1);
            continue;
        }
        for(int j=i+1;j<2*n;j++){
            if(nums[j%n]>nums[i]){
                ans.push_back(nums[j%n]);
                break;
            }

        }
    }
    return ans;
    }
};
