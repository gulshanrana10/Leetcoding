class Solution {
public:
   
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        vector<pair<int,int>> arr[n+1];
        vector<int> dist(n,INT_MAX);
        dist[src]=0;
        for(auto c:flights){
            arr[c[0]].push_back({c[1],c[2]});
        }
        queue<pair<int,pair<int,int>>> q;
        q.push({0,{src,0}});
     
     while(!q.empty()){
         auto front=q.front();
         q.pop();
         int stops=front.first;
         int node=front.second.first;
         int cost=front.second.second;

         if(stops>k)continue;
         for(auto x:arr[node]){
             if(cost+x.second<dist[x.first] && stops<=k){
                 dist[x.first]=cost+x.second;
                 q.push({stops+1,{x.first,dist[x.first]}});
             }
         }
     }
     if(dist[dst]==INT_MAX)return -1;
        return dist[dst];

    }
};