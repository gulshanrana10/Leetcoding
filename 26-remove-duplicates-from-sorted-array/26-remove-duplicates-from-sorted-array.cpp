class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int pos=1;
        int temp=nums[0],ans=1;
        for(int i=1;i<nums.size();i++){
            if(temp!=nums[i]){
                temp=nums[i];
                nums[pos]=nums[i];
                pos++;
                ans++;
            }
        }
         return ans;
        
    }
};