class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int flag=0;
        for(int i=0;i<matrix.size();i++){
            if(target>=matrix[i][0] && target<= matrix[i][matrix[0].size()-1]){
              flag=i;
                break;
            }
        }
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[flag][j]==target)return true;
        }
        return false;
         
    }
};