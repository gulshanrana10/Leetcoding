class Solution {
public:
    vector<string> click(vector<string> a,vector<string> b){
        vector<string> res;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                res.push_back(a[i]+b[j]);
            }
        }
        return res;
    }
    vector<string> letterCombinations(string digits) {
        vector<vector<string>> res;
        res={{"a","b","c"},{"d","e","f"},{"g","h","i"},{"j","k","l"},{"m","n","o"},{"p","q","r","s"},{"t","u","v"},{"w","x","y","z"}};
        vector<string> ans;
        if(digits.size()==0)return ans;
        ans=res[digits[0]-'0'-2];
        for(int i=1;i<digits.size();i++){
            ans=click(ans,res[digits[i]-2-'0']);
        }
        return ans;
    }
};