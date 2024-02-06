class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=100;
        vector<vector<int>> vis(n,vector<int>(n,0));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        pq.push({grid[0][0],{0,0}});
        vis[0][0]=1;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int t=it.first;
            int r=it.second.first;
            int c=it.second.second;
           
            if(r==n-1 && c==n-1)return t;
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<n && vis[nr][nc]!=1){
                    vis[nr][nc]=1;
                    pq.push({max(t,grid[nr][nc]),{nr,nc}});
                }
            }
        }

        return -1;
    }
};
