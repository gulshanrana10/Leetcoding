class Solution {
public:
map<int,int> mp;
int process(int p){
    if((p%3)%2!=0) return p/3+1;
    return p/3+(p-(p/3)*3)/2;
       
}
    int minOperations(vector<int>& nums) {
        int ans=0;
     
        for(auto c:nums)mp[c]++;
        for(auto c:mp){
            if(c.second==1)return  -1;
        }
        for(auto c:mp){
            int p=c.second;
            ans+=process(p);
        }
        return ans;
    }
};