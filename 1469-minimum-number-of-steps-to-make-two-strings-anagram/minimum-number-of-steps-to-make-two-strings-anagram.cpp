class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mp;
        int c=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(mp[t[i]]>0){
                mp[t[i]]--;
            }
            else c++;
        }
        return c;
    }
};


