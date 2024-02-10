class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        vector<string> ans;
        for(auto c:words){
            mp[c]++;
        }
        vector<pair<int,string>> vec;
        for(auto c:mp){
            vec.push_back({c.second,c.first});
        }
        sort(vec.begin(),vec.end(), [](pair<int,string> &a, pair<int,string> &b){
            if(a.first==b.first)return a.second<b.second;
            return a.first>b.first;
        } );
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].second);
        }
        return ans;
        
    }
};