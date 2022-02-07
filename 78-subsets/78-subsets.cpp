class Solution {
public:
    vector<vector<int>> ans;
    void process(vector<int> temp1,vector<int> temp,int i){
        if(i==temp1.size()){
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(temp1[i]);
        process(temp1,temp,i+1);
        temp.pop_back();
        process(temp1,temp,i+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<int> temp1;
        set<int> nums1;
    for(int i=0;i<nums.size();i++)nums1.insert(nums[i]);
        for(auto x:nums1)temp1.push_back(x);
        process(temp1,temp,0);
        return ans;
    }
};
