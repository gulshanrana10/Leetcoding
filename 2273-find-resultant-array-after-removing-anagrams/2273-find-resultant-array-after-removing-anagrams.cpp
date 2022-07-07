class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> temp;
        vector<string> ans;
        
        ans.push_back(words[0]);
        
        for(auto x:words){
            sort(x.begin(),x.end());
            temp.push_back(x);
        }
            
        for(int i=1;i<temp.size();i++){
           
            int l=ans.size()-1;
           
            string tmp=ans[l];
            sort(tmp.begin(),tmp.end());
           if(temp[i]!=tmp)ans.push_back(words[i]);
        }
       
        return ans;
    }
};