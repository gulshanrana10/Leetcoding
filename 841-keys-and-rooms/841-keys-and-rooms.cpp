class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(),false);
        queue<int> q;
        q.push(0);
        visited[0]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            visited[node]=true;
            for(auto c:rooms[node]){
                if(!visited[c]){
                    q.push(c);
                    }
                
            }
        }
        for(int i=0;i<rooms.size();i++) if(!visited[i]) return false;
        return true;
    }
};