class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        queue<int> q;
        int cnt=1;
        int pos=1;
        q.push(nums[0]);
     
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]==nums[i-1]){  
              cnt++;

            }
            else{
              cnt=1;
            }
            if(cnt<=2){
            
                nums[pos]=nums[i];
                pos++;
            }
        }
        
      
        return pos;
    }
};