class Solution {
public:
    int ans=0,empty=1;
    
 
    void process(vector<vector<int>> grid,int i,int j,int count){
          
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==-1)return;
        
        
        if(grid[i][j]==2){
            
            if(count==empty)ans++;
            return;}
        grid[i][j]=-1;
        process(grid,i+1,j,count+1);        
        process(grid,i-1,j,count+1);
        process(grid,i,j+1,count+1);
        process(grid,i,j-1,count+1);
        grid[i][j]=0;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        int starti,startj;
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){starti=i,startj=j;}
           else if(grid[i][j]==0)empty++;}}
       
        
        process(grid,starti,startj,0);
        return ans;
    }
};

