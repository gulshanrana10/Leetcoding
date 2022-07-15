class Solution {
public:
   
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int> &s1, vector<int> &s2){return s1[0]<s2[0];});
       vector<vector<int>> ans;
        
     for(auto interval:intervals){
         if(ans.empty() || ans.back()[1]<interval[0]){
             ans.push_back(interval);
         }
         else{
             ans.back()[1]=max(interval[1],ans.back()[1]);
         }
     }
        return ans;
        
    }
};