class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> mat;
        mat=board;
  //for(auto c:mat)for(auto x:c)cout<<x<<" ";cout<<endl;
        int x[8]={0,0,+1,-1,+1,-1,+1,-1};
        int y[8]={+1,-1,0,0,+1,-1,-1,+1};
        int m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int cnt=0;
                for(int k=0;k<8;k++){
                    int a=i+x[k];
                    int b=j+y[k];
                    
                    if(a<=m-1 && a>=0 && b>=0 && b<=n-1 ){
                    if(board[a][b]==1)cnt++;
                    }
                }
                
                if(board[i][j]==0){
                    if(cnt==3)mat[i][j]=1;
                    else mat[i][j]=board[i][j];
                }
                else {
                    if(cnt<2)mat[i][j]=0;
                    else if(cnt==2 || cnt==3)mat[i][j]=1;
                    else if(cnt>3)mat[i][j]=0;
                }
            }
        }
      board=mat;
    }
};