class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        queue<int> q;
        vector<int> adj[numCourses];
        vector<int> indegree(numCourses,0);
        for(auto c:prerequisites){
            adj[c[0]].push_back(c[1]);
            indegree[c[1]]++;
        }
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0)q.push(i);
        }
        int count=0;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            count++;
            for(auto c:adj[x]){
                indegree[c]--;
                if(indegree[c]==0)q.push(c);
            }
        }
        if(numCourses==count)return true;
        return false;
    }
};