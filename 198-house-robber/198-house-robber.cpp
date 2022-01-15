class Solution {
public:
   /* int ans=0;
    int arr[INT_MAX]=memset(INT_MAX,0);
    int process(vector<int> &nums,int start,int end){
        if(start>=end)return 0;
        if(arr[start])return arr[start];
        arr[start]= max(nums[start]+process(nums,start+2,end),process(nums,start+1,end));
        
        return arr[end];
        
    }*/
    int rob(vector<int>& nums) {
       // process(nums,0,nums.size());
        int arr[103];
        if(nums.size()==0)return nums[0];
        arr[0]=0;
        for(int i=1;i<nums.size()+1;i++){
            
            if(i==1)arr[i]=nums[i-1];
            else if(i==2)arr[i]=max(nums[0],nums[1]);
            else arr[i]=max(arr[i-1],arr[i-2]+nums[i-1]);
        }
        return arr[nums.size()];
    }
};

//0-----