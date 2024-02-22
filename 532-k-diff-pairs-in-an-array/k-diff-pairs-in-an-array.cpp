class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int> mp;
        set<int> s;
        int ans=0;
        for(auto c:nums){
            s.insert(c);
            mp[c]++;
        }
        if(k==0){
            for(auto c:mp){
                if(c.second>1)ans++;
            }
            return ans;
        }
        nums.clear();
        for(auto c:s)nums.push_back(c);
        
        sort(nums.begin(),nums.end());
        for(auto c:nums){
            if(mp[c+k]>0){ans++;}
            
        }
        return ans;
    }
};