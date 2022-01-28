class Solution {
public:
    
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.size();i++){
            char e =tolower(s[i]);
            if(e>='a' && e<='z' || (e>='0' && e<='9'))a+=e;
        }
        for(int i=0;i<a.size()/2;i++){
            if(a[i]!=a[a.size()-1-i])return false;
        }
        
        return true;
    }
};