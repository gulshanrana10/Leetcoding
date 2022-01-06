class Solution {
public:
//temp---------- 
    set<vector<int>> ans;
    void process(vector<int> candidates,int n,vector<int>& temp){
        if(n==0)ans.insert(temp);
        if(n<0)return;
        if(candidates.size()==0)return;
        temp.push_back(candidates[candidates.size()-1]);
        
        process(candidates,n-(candidates[candidates.size()-1]),temp);
        
        if(temp.size()==0)return;
        temp.pop_back();
         if(candidates.size()==0)return;
        candidates.pop_back();           // 2,3,6
        process(candidates,n,temp);
        return;
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        process(candidates,target,temp);
        vector<vector<int>> combination;
        for(auto s:ans)combination.push_back(s);
        return combination;
    }
};