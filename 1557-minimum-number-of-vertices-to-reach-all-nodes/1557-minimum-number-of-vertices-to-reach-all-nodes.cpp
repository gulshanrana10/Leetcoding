class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        map<int,int> mp;
        for(auto c:edges){
            mp[c[1]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[i]<1)ans.push_back(i);
        }
        return ans;
    }
};