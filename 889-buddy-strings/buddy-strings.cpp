class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int cnt=0;
        map<char,int> mp1;
        map<char,int> mp2;
        if(s.size()!=goal.size())return false;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
            mp2[goal[i]]++;
            if(s[i]!=goal[i])cnt++;
        }

        int fg=0;
        for(auto c:mp1){
            if(c.second!=mp2[c.first])return false;
            if(c.second>1)fg=1;
        }
        if(cnt>2)return false;
        if(cnt==2 || fg==1)return true;
        return false;
    }
};