class Solution {
public:
   
    int lengthOfLongestSubstring(string s) {
     int ans=0;
        int l=s.size()-1;
        int start=0,end=0;
        map<char,int> mp;
     if(s.size()==0)return 0;
       while(end<=l && start<=l){
            if(mp[s[end]]!=0){
                
                mp[s[start]]=0;
                start++;
            
            }
            else{
                mp[s[end]]++;
                end++;
ans=max(ans,end-start);
            }
           
           
        }
        return ans;
    }
};
