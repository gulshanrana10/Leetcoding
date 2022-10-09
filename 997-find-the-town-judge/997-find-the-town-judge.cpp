class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int ans=-1,flag=0;
        map<int,int> mp;
        if(n==1)return 1;
     for(int i=0;i<trust.size();i++){
         mp[trust[i][1]]++;
     }
        for(auto c:mp){
            if(mp[c.first]>=n-1)ans= c.first;
        }
        for(auto c:trust){
            if(c[0]==ans){
                if(c[1]!=ans)return -1;
            }
        }
        return ans;
    }
};