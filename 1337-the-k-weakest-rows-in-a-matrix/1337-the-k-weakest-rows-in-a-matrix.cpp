class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<vector<int>> soldiers;
       
        
        for(int i=0;i<mat.size();i++){
            int temp=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1)temp++;
            }
            
            soldiers.push_back({temp,i});
        }
        sort(soldiers.begin(),soldiers.end());
        vector<int> ans;
        
        for(int i=0;i<soldiers.size();i++){
            
        if(ans.size()==k)return ans;
           ans.push_back(soldiers[i][1]);
            }
       
        return ans;
    }
};