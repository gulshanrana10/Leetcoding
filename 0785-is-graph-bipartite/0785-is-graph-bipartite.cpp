class Solution {
public:
   
    bool isBipartite(vector<vector<int>>& graph) {

        map<int,int> visited;
    
        queue<int> q;
        vector<int> color(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(visited[i])continue;
        visited[i]=true;
        color[i]=0;
        q.push(i);
        while(!q.empty()){
            int u=q.front();
            q.pop();
          
            for(auto c:graph[u] ){
                  if(color[c]==color[u])return false;
                if(!visited[c]){
                    visited[c]=true;
                    color[c]=1-color[u];
                  q.push(c);
                }
               
            }}}
        
    return true;}
};