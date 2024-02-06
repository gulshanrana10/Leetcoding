class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,0}});
        int rc[4]={0,0,1,-1};
        int cc[4]={+1,-1,0,0};
        int a=heights.size();
        int b=heights[0].size();
        vector<vector<int>> dist(a,vector<int>(b,INT_MAX));
        dist[0][0]=0;
        vector<vector<int>> vis(a,vector<int>(b,0));
        while(!pq.empty()){
            auto c=pq.top();
            int t=c.first;
            int rol=c.second.first;
            int col=c.second.second;
            pq.pop();
            if(!vis[rol][col]){
                vis[rol][col]=1;
            //cout<<"<"<<rol<<","<<col<<">:"<<t<<endl;
            for(int i=0;i<4;i++){
                int row=rol+rc[i];
                int co=col+cc[i];
                
                if(row>=0 && co>=0 && row<a && co<b){
                    
                    dist[row][co]=min(dist[row][co],max(t,abs(heights[rol][col]-heights[row][co])));                   
                    pq.push({dist[row][co],{row,co}});
                }
            }}

        }
        
        return dist[a-1][b-1];


    }
};