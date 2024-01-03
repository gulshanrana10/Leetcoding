class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int arr[matrix.size()+1][matrix[0].size()+1];
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                arr[i][j]=matrix[matrix.size()-j-1][i];
            /*    0,0->2,0
                0,1->1,0
                0,2->0,0
                1,0->2,1
                
                
          1      0,0->0,2
          2      0,1->1,2
                0,2->2,2
                    
         1       1,0->0,1
          2      1,1->1,1
                1,2->2,1
                    
            1    2,0->0,0
           2     2,1->1,0
                2,2->2,0*/
                    
            }
        }
         for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                matrix[i][j]=arr[i][j];
            }
             }
        
    }
};