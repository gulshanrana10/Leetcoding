class Solution {
public:
    map<int,bool> visited;
    void dfs(int i,vector<vector<int>>& rooms){
        if(visited[i])return;
        visited[i]=true;
        for(auto c:rooms[i]){
            if(!visited[c])dfs(c,rooms);
        }
        
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        dfs(0,rooms);
        for(int i=0;i<n;i++)if(visited[i]!=true)return false;
        return true;
    }
};