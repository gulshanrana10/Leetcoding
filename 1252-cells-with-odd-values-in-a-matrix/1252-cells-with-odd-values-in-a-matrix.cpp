class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        map<int,int> mpr;
        map<int,int> mpc;
        for(int i=0;i<indices.size();i++){
            mpr[indices[i][0]]++;
            mpc[indices[i][1]]++;
        }
        int ret=0;        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((mpr[i]+mpc[j])%2!=0)ret++;
            }
        }
        return ret;
        
    }
};