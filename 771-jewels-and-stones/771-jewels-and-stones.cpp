class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mp;
        int ans=0;
        for(int i=0;i<jewels.size();i++){
            mp[jewels[i]]++;
        }
        for(int i=0;i<stones.size();i++){
            if(mp.find(stones[i])!=mp.end()){
                ans++;
            }
        }
            
               return ans;
    }
};