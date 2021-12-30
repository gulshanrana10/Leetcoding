class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        /*vector<int> ans,temp;
        temp=nums;
        sort(temp.begin(),temp.end());
        int a=0,b=nums.size()-1;
        while(a<b){
           
            if(temp[a]+temp[b]>target)b--;
            else if(temp[a]+temp[b]<target)a++;
            else{
             
                ans.push_back(distance(nums.begin(),find(nums.begin(),nums.end(),temp[a])));
                ans.push_back(distance(nums.begin(),find(nums.begin(),nums.end(),temp[b])));
                break;
            }
            
        }
        return ans;*/
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};