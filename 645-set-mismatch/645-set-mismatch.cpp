class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> mp;
        int p,q;
        for(auto x:nums)mp[x]++;
        for(int i=1;i<nums.size()+1;i++){
            if(mp[i]==0) p=i;
            else if(mp[i]==2) q=i;
        }
        vector<int> ans={q,p};
        return ans;
    }
};