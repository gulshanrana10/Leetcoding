class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*
        for(int i=0;i<nums.size()-1;i++){
            for(int j=1+i;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        */
        int z=0,o=0,t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) z++;
           else if(nums[i]==1) o++;
           else if(nums[i]==2) t++;
        }
       int a=nums.size();
         for(int i=0;i<a;i++){
             nums.pop_back();
         }

        for(int i=0;i<z;i++){
             nums.push_back(0);
         }
        for(int i=0;i<o;i++){
             nums.push_back(1);
         }
        for(int i=0;i<t;i++){
             nums.push_back(2);
         }
        
        
        
    }
};