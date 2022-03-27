class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<matrix.size();i++){
         int minn=INT_MAX;
            
            for(int j=0;j<matrix[0].size();j++){
                minn=min(minn,matrix[i][j]);
                    
                }
            mp[minn]++;
            }
        
       
        for(int j=0;j<matrix[0].size();j++){
            int temp=INT_MIN;
            for(int i=0;i<matrix.size();i++){
                temp=max(temp,matrix[i][j]);
            }
            if(mp.find(temp)!=mp.end())ans.push_back(temp);
        }
        return ans;
    }
};