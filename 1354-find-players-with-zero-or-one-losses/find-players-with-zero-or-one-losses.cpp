class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans;
        map<int,int> mp1;
        map<int,int> mp2;
        for(auto c:matches){
            mp1[c[0]]++;
            mp2[c[1]]++;
        }
        vector<int> temp1;
        vector<int> temp2;
        for(auto c:mp2){
            if(c.second==1)temp2.push_back(c.first);            
        }
        for(auto c:mp1){
            if(c.second>0 && mp2[c.first]<1)temp1.push_back(c.first);            
        }
        ans.push_back(temp1);
        ans.push_back(temp2);
        return ans;
    }
};