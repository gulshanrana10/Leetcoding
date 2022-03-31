class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     
        vector<vector<string>> ans;
        map<string,vector<string>> mp;
        
        for(auto x: strs){
            string temp=x;
            sort(x.begin(),x.end());
            
                mp[x].push_back(temp);
           
        }
        for(auto x:mp){
            vector<string> temp;
            for(auto y:x.second){
                temp.push_back(y);
            }
            ans.push_back(temp);
        }
       
        return ans;
    }
};