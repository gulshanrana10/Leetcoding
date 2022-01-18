class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       if(nums.size()==0)return 0;
        
        vector<int> num1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val)nums[i]=51;
        }
        sort(nums.begin(),nums.end());
        if(nums.size()==1 && nums[0]==51){
            nums.pop_back();
            return 0;}
        while(nums[nums.size()-1]==51) {
            nums.pop_back();
            if(nums.size()==0)break;}
        for(auto x: nums)cout<<x;
        return nums.size();
    }
};