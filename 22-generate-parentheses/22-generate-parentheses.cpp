class Solution {
public:
    
    void process(vector<string> &ans,string s,int n,int m){
        if(n==0 &&m==0){
            ans.push_back(s);
            return;
        }
        if(m>0)process(ans,s+")",n,m-1);
        if(n>0)process(ans,s+"(",n-1,m+1);
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        process(ans,"",n,0);
        return ans;
    }
};