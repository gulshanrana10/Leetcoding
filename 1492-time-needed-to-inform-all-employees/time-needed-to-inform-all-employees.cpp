class Solution {
public:
    int ans=0;
    void dfs(vector<int> adj[],int head,int sm,vector<int>& informTime ){
        
            ans=max(ans,sm);
            for(auto c:adj[head]){
                dfs(adj,c,sm+informTime[head],informTime);
            }        
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> adj[n];
        for(int i=0;i<manager.size();i++){
            if(manager[i]!=-1)adj[manager[i]].push_back(i);
        }

        dfs(adj,headID,0,informTime);
        return ans;
    }
};