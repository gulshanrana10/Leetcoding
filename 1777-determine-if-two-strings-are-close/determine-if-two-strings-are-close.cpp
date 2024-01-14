class Solution {
public:

    bool closeStrings(string word1, string word2) {
        map<char,int> mp1,mp2;
        if(word1.size()!=word2.size())return false;
        for(int i=0;i<word1.size();i++){
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        for(int i=0;i<word2.size();i++){
            if(mp1[word2[i]]==0)return false;
        }
  vector<int> v1,v2;
  for(auto c:mp1)v1.push_back(c.second);
  for(auto c:mp2)v2.push_back(c.second);
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());
  return v1==v2;
    }
};

