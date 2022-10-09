class Solution {
public:
    vector<vector<int>> ans; 
    void dfs(int n, vector<vector<int>> graph, vector<int> temp){
       if(n==graph.size()-1){
                             ans.push_back(temp);
                           return;}
        for(auto x:graph[n]){
           
            temp.push_back(x);
            dfs(x,graph,temp);
            temp.pop_back();
        }
        
    }
   
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       vector<int> temp;
      temp.push_back(0);
        dfs(0,graph,temp);
        return ans;
    }
    
    
};