class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
         vector<vector<bool>>visited(n,vector<bool>(n,0));
        for(auto vec:dig){
            visited[vec[0]][vec[1]] = 1;
        }
        int count = 0;
        for(auto artifact:artifacts){
            int r1 = artifact[0];
            int c1 = artifact[1];
            int r2 = artifact[2];
            int c2 = artifact[3];
            bool flag = true;
			
            for(int i = r1;i<=r2;i++){
                for(int j = c1;j<=c2;j++){
                    if(!visited[i][j]){
                        flag = false;
                    }
                }
            }
            
            if(flag)
                count++;
        }
        
        return count;
    }
};