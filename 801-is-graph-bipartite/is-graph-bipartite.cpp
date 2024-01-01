class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        queue<int> q;
        
        int n=graph.size();
        vector<int> visited(n,0);
        vector<int> color(n,-1);
       
        for(int i=0;i<n;i++){
            if(!visited[i]){
                visited[i]=1;
                q.push(i);
                color[i]=0;
                while(!q.empty()){
            int x=q.front();
            q.pop();
            for(auto c:graph[x]){
               if(color[x]==color[c])return false;
                if(!visited[c]){
                    visited[c]=1;
                    
                color[c]=1-color[x];
                q.push(c);
                }
                

            }
        }
            }
        }
        
        return true;
    }
};