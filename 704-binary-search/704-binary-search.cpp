class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=((end-start)/2)+start;
            
             if(nums[mid]>target) end=mid-1;
            else if(nums[mid]<target)start=mid+1;
            else return mid;
        }
        return -1;
    }
};