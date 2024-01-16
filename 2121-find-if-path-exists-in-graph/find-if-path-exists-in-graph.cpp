class Solution {
public:
vector<int> visited;
int ans=0;
    void dfs(int i,int j, vector<int> arr[]){
        visited[i]=1;
        if(i==j)ans=1;
        for(auto c: arr[i]){
            if(!visited[c]){
                dfs(c,j,arr);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        visited.resize(n,0);
        vector<int> arr[n+1];
        for(auto c:edges){
            arr[c[0]].push_back(c[1]);
            arr[c[1]].push_back(c[0]);
        }
            dfs(source,destination,arr);
        return ans;
    }
};