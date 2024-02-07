class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        map<char,pair<int,int>> mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end())mp[s[i]]={i,i};
            else mp[s[i]]={mp[s[i]].first,i};
        }
        vector<pair<int,int>> vec;
        for(auto c:mp)vec.push_back({c.second.first,c.second.second});
        sort(vec.begin(),vec.end());
        vector<pair<int,int>> vec2;
        
        for(auto c:vec){
            if(vec2.size()==0)vec2.push_back(c);
            else if(c.first>vec2[vec2.size()-1].first && c.first<=vec2[vec2.size()-1].second)vec2[vec2.size()-1].second=max(c.second,vec2[vec2.size()-1].second);
            else vec2.push_back(c);
        }
        for(auto c:vec2)ans.push_back(c.second-c.first+1);
        return ans;

    }
};