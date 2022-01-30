class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a=0,b=numbers.size()-1;
        vector<int> ans;
        while(a<b){
            if(numbers[a]+numbers[b]==target){
                ans.push_back(a+1);
                ans.push_back(b+1);
                break;
            }
            if(numbers[a]+numbers[b]>target)b--;
            if(numbers[a]+numbers[b]<target)a++;
        }
    return ans;
    }
};