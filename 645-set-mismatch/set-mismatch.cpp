class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      
        vector<int> vec(2,0);
        map<int,int> mp;

        for(auto c:nums)mp[c]++;
        for(int i=1;i<nums.size()+1;i++){
            if(mp[i]==2)vec[0]=i;
            if(mp[i]==0)vec[1]=i;
        }
        return vec;
    }
};
