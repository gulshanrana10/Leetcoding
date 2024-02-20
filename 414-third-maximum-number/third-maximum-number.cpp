class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int> pq;
        map<int,int> mp;
        for(auto c:nums){
            if(mp[c]==0)pq.push(c);
            mp[c]++;
        }
        if(pq.size()<3)return pq.top();
        
        pq.pop();
        pq.pop();
        return pq.top();
        
    }
};