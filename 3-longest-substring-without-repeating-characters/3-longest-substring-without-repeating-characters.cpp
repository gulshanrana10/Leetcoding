class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int start=0,end=0,l=s.size();
        if(s.size()==0)return 0;
        map<char,int> mp;
        while(start<l && end<l && start<=end){
            if(mp[s[end]]!=0){
                mp[s[start]]--;
                start++;
            }
            else{
                mp[s[end]]++;
                end++;
                
                ans=max(ans,end-start+1);
            }
        }
    return ans-1;
    }
};