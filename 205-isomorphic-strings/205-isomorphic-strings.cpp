class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
        map<char,int> check;
       if(s.size()!=t.size())return false;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==0){
                if(check[t[i]])return false;
                mp[s[i]]=t[i];
                check[t[i]]=1;
            }
            else{
                if(mp[s[i]]!=t[i])return false;
                 //else if(check[t[i]])return false;
            }
        }
        return true;
    }
};