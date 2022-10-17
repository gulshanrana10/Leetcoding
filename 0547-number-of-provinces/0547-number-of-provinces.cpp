class Solution {
public:
    int ans=0;
    map<int,int> visited;
   void dfs(vector<int> adj[],int i){
        if(!visited[i]){
            
            visited[i]=true;
            for(auto c: adj[i]){
                dfs(adj,c);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
     vector<int> adj[isConnected.size()+1];
    for(int i=0;i<isConnected.size();i++){
       for(int j=0;j<isConnected.size() ;j++){
          
           if(i!=j && isConnected[i][j]==1)adj[i+1].push_back(j+1);
       }
    }
      
        for(int i=1;i<isConnected.size()+1;i++){
           if(!visited[i]){
           
               ans++;
               dfs(adj,i);
           }
        }
        return ans;}
};