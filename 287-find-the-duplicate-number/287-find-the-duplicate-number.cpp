class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp=nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]==temp)return temp;
            else temp=nums[i];
        }
        return -1;
    }
};