class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> s;
        map<int,int> mp;
        for(auto x:nums1)mp[x]++;
        for(auto x:nums2)if(mp[x]>0)s.insert(x);
        for(auto q:s)ans.push_back(q);
        return ans;
    }
};