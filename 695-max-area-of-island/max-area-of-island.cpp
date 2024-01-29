class Solution {
public:
int ans=0;
    int dfs(int i,int j,int &flg,vector<vector<int>>& grid){
        if(i<0 || j<0 || i>=grid.size() || j>= grid[0].size() || grid[i][j]==0)return 0;

        grid[i][j]=0;
        flg++;
       
        dfs(i+1,j,flg,grid);
        dfs(i-1,j,flg,grid);
        dfs(i,j+1,flg,grid);
        dfs(i,j-1,flg,grid);
         return flg;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size(), col=grid[0].size();
        int ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    int flg=0;
                    ans=max(ans,dfs(i,j,flg,grid));
                }
            }
        }
        return ans;
    }
};