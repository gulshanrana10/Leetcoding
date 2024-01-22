class Solution {
public:
    map<int,bool> visited;
    void dfs(vector<int> adj[],int i){
    visited[i]=true;
    for(auto c:adj[i]){
        if(!visited[c]){
            dfs(adj,c);
        }
    }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans=0;
        int n=isConnected.size();
        vector<int> adj[n+1];
        
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(i!=j && isConnected[i][j]==1)adj[i+1].push_back(j+1);
            }
        }
        for(int i=1;i<n+1;i++){
            if(!visited[i]){
                ans++;
                dfs(adj,i);
            }
        }
        return ans;
    }
};