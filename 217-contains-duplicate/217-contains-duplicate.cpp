class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1)return true;
            mp[nums[i]]=1;
            
        }
        return false;
    }
};