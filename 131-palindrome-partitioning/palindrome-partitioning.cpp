class Solution {
public:
vector<vector<string>> ans;
    bool check_palindrome(string s,int l,int r){
         while (l < r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }
    void process(string s,int i,vector<string> temp){
        int n=s.length();
        if(i==n)ans.push_back(temp);
        for(int k=i;k<n;k++){
            if(check_palindrome(s,i,k)){
                temp.push_back(s.substr(i,k-i+1));
                process(s,k+1,temp);
                temp.pop_back();
        }
        }
        
    }
    vector<vector<string>> partition(string s) {
        
        vector<string> temp;
        process(s,0,temp);
        return ans;
    }
};