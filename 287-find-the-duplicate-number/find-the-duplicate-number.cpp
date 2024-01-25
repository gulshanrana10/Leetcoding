class Solution {
public:
  
    int findDuplicate(vector<int>& nums) {
        
        map<int,int> mp;
        for(auto c:nums)mp[c]++;
        for(auto c:mp)if(c.second>1)return c.first;
        return 0;

    }
};