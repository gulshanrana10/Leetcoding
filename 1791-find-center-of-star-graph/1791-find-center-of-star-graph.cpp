class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> mp;
        for(auto x: edges){
            mp[x[0]]++;
            mp[x[1]]++;
        }
        int p=-1,mx=-1;
        for(auto x:mp){
            
            if(mx<x.second){
              p=x.first;
                mx=x.second;
            }
        }
        return p;
    }
};