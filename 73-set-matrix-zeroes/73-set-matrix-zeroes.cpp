class Solution {
public:/*
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
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[0][i]==0 || matrix[j][0]==0)matrix[i][j]=0;
            }}
        /*
        if(flag==1){for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(flag==1){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }   
        }}
        else{
            for(int i=0;i<matrix.size();i++)if(c==1)matrix[0][i]=0;
        for(int i=0;i<matrix[0].size();i++)if(r==1)matrix[i][0]=0;
        }
    
          //cout<<flag;
    }*/
       void setZeroes(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        bool firstRow = false;  // do we need to set first row zero
        bool firstCol = false;  // do we need to ser first col zero
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
					if(a[i][j] == 0){   // store rows and cols state in first row and col
                    if(i==0) firstRow = true;
                    if(j==0) firstCol = true;
                    a[i][0] = 0;
                    a[0][j] = 0;
                }
            }
        }
        // cout<<firstRow<<" "<<firstCol<<endl;
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(a[i][0] == 0 || a[0][j] == 0){
                    a[i][j] = 0;
                }
            }
        }
        
        if(firstRow){
            for(int i=0;i<m;i++) a[0][i] = 0;
        }
        
        if(firstCol){
            for(int i=0;i<n;i++) a[i][0] = 0;
        }
    }
};