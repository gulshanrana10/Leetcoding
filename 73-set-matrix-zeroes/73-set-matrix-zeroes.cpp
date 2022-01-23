class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int flag=0;
        int r=0,c=0;
        if(matrix[0][0]==0)flag=1;
  
        for(int i=1;i<matrix.size();i++)if(matrix[i][0]==0)r=1;
        for(int i=1;i<matrix[0].size();i++)if(matrix[0][i]==0)c=1;
      
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
            }
        }}
        
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][0]==0 || matrix[0][j]==0)matrix[i][j]=0;
            }}
        
        if(flag==1){
            for(int i=0;i<matrix[0].size();i++)matrix[0][i]=0;
            for(int i=0;i<matrix.size();i++)matrix[i][0]=0;
        }
        else{
            if(r==1){
                for(int i=0;i<matrix.size();i++)matrix[i][0]=0;}
            if(c==1){
                for(int i=0;i<matrix[0].size();i++)matrix[0][i]=0;}
        }
    
    }
};