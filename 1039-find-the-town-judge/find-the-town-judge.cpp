class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       if(n==1)return 1;
        map<int,int> mp;
        for(auto c:trust){
            if(c[0]!=c[1])mp[c[1]]++;
        }
        int ans=0;
        int tmp=-1;
        for(auto c:mp){
            if(ans<c.second){
                ans=c.second;
                tmp=c.first;
                }
        }
        for(auto c:trust){
            if(c[0]==tmp)return -1;
        }
        if(ans==n-1)return tmp;
        return -1;
    }
};