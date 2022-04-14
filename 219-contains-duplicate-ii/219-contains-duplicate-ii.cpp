class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        bool ans;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]>0){
                if(abs(mp[nums[i]]-i-1)<=k)return true;
            }
            mp[nums[i]]=i+1;
        }
        return false;
    }
};