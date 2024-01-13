class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int c=0;
        for(int i=0;i<t.size();i++)
        {
            if(mp[t[i]]>0){
                c++;
                mp[t[i]]--;
            }
        }
        cout<<c;
        return t.size()+s.size()-2*c;
    }
};