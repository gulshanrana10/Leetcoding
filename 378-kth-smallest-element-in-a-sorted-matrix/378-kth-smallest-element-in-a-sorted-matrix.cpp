class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
    
    vector<int> v1;
            for(int i=0;i<matrix.size();i++){
                for(int j=0;j<matrix[0].size();j++){
                    v1.push_back(matrix[i][j]);
                }
            }
            sort(v1.begin(),v1.end());
        return v1[k-1];
    }
};

