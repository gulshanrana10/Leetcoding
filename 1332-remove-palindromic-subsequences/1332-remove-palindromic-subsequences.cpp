class Solution {
public:
    int removePalindromeSub(string s) {
        int check=1;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-1-i])check=0;
        }
        return 2-check-s.empty();
    }
};