class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=0;
        string ans;
        while(n<strs[0].size()){
           
        for(int i=0;i<strs.size();i++){
            if(strs[0][n]!=strs[i][n]) return ans;
           
        }  
           ans=ans+strs[0][n];
            n++;
        }
        return ans;
    }
};