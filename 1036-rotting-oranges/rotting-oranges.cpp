class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
      priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> q;
      
      int m=grid.size(),n=grid[0].size();
      vector<vector<int>> vis(m,vector<int>(n,0));
      vis[0][0]=1;
     int r[4]={+1,-1,0,0};
     int c[4]={0,0,+1,-1};
      for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
              if(grid[i][j]==2){
                  vis[i][j]=1;
                  q.push({0,{i,j}});
              }
          }
      }
int ans=0;
        while(!q.empty()){
            int t=q.top().first;
            int rr=q.top().second.first;
            int cc=q.top().second.second;
            q.pop();
            ans=max(ans,t);
            //cout<<rr<<" "<<cc<<" "<<t<<endl;
            for(int i=0;i<4;i++){
                int row=rr+r[i];
                int col=cc+c[i];
                //cout<<row<<" "<<col<<" "<<t+1<<endl;
                if(row>=0 && col>=0 && row<m && col<n && grid[row][col]==1 ){
                        
                        grid[row][col]=2;
                        q.push({t+1,{row,col}});
                }

            }
        }
        for(auto c:grid)for(auto x:c)if(x==1)return -1;
        return ans;
    }
};