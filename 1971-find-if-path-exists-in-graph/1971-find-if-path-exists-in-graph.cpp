class Solution {
public:
    void dfs(int x, bool visited[],vector<int> vec[]){
        if(visited[x]==false){
            visited[x]=true;
            for(auto c:vec[x]){
                dfs(c,visited,vec);
            }
         }
        
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        bool visited[n];
        memset(visited,false,sizeof(visited));
        vector<int> vec[n];
        for(auto x:edges){
            vec[x[0]].push_back(x[1]);
            vec[x[1]].push_back(x[0]);
        }
       dfs(source,visited,vec);
       
        return visited[destination];
    }
};