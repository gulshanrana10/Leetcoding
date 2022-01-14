class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int> mp;
            for(int i=0;i<nums.size();i++)mp[nums[i]]=1;
        for(int i=0;i<nums.size()+1;i++){
            if(mp[i]!=1)return i;
        }
        cout<<mp[0];
        return -1;
    }
};