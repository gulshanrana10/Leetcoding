class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      double k=1,j=0;
        while(j<=nums.size()-1)
        {
           
            if(nums[j]<k)j++;
            else if(nums[j]==k){
                j++;
                k++;
            }
            else return k;
        }
        return max(*max_element(nums.begin(),nums.end())+1,1);
    }
};