class Solution {
public:
    vector<vector<int>> ans;
    void process(int ind,int target,vector<int>& candidates,vector<int>& temp){
        
   if(target==0){
    ans.push_back(temp);
        }
     for(int i=ind;i<candidates.size();i++){
         if(i>ind && candidates[i]==candidates[i-1])continue;
         if(candidates[i]>target)break;
         temp.push_back(candidates[i]);
         process(i+1,target-candidates[i],candidates,temp);
         temp.pop_back();
     }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        map<int,int> mp;
        process(0,target,candidates,temp);
       return ans;
    }
};