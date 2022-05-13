class Solution {
    
public:
    void solve(vector<int> nums,set<vector<int>> &s,vector<int> t){
        if(t.size()==nums.size()){
            s.insert(t);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=11){
                int j=nums[i];
                t.push_back(j);
                nums[i]=11;
                solve(nums,s,t);
                nums[i]=j;
                t.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> res;
        set<vector<int>> s;
        solve(nums,s,{});
        for(auto p:s){
            res.push_back(p);
        }
        return res;
    }
};