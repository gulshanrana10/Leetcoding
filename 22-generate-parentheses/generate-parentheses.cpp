class Solution {
public:
    vector<string> ans;
    void process(int n,string ss, string s,int score){
       
        if(score==0 && n==0){
            s+=")";
           
            ans.push_back(s);
            return;}
        if(score<0 || n<0 || score>n)return;
        else s+=ss;
        process(n,"(",s,score+1);
        process(n-1,")",s,score-1);
    }
    vector<string> generateParenthesis(int n) {
        map<string,int> mp;
        string s="";
        process(n,"(",s,1);
        return ans;
    }
};