class Solution {
public:
    vector<vector<int>> ans;
    map<int,bool> visited;
    int k;
    void dfs(int a,vector<vector<int>> graph,vector<int> tmp,int k){
        tmp.push_back(a);        
        
           
       if(a==k){
            ans.push_back(tmp);
            return;
        }
        for(auto c:graph[a]){                    
            dfs(c,graph,tmp,k);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> tmp;        
        k=graph.size()-1;
                dfs(0,graph,tmp,k);                
        
        return ans;
    }
};