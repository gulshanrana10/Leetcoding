class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> arr[n+1];
        for(auto c:times){
            arr[c[0]].push_back({c[1],c[2]});
        }
        map<int,bool> visited;
        vector<int> dist(n+1,INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({k,0});
        visited[k]=true;
        dist[k]=0;
        while(!q.empty()){
            auto p=q.top();
            int node=p.first;
            int d=p.second;
            q.pop();
            for(auto c:arr[node]){
                if(d<dist[node])continue;
                visited[c.first]=true;
                if(dist[c.first]> dist[node]+c.second){
                dist[c.first]=min(c.second+dist[node],dist[c.first]);
                q.push({c.first,dist[c.first]});
            
          }}
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(!visited[i])return -1;
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};