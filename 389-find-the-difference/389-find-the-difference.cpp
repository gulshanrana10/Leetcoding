class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mp;
        for(int i=0;i<t.size();i++)mp[t[i]]++;
        
        for(int i=0;i<s.size();i++)mp[s[i]]--;
       
        for(int i=0;i<t.size();i++){
           if(mp[t[i]]!=0)return t[i];
          
        }
      
        return 'a';
    }
};