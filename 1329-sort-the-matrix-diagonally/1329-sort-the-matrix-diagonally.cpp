class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<vector<int>> ans;
        int m=mat.size(),n=mat[0].size();
        int l=max(m,n);
        
        for(int k=0;k<l;k++){
            vector<int> temp;
        for(int i=0;i<l;i++){
            if(i!=i+k && i<mat.size() && i+k<mat[0].size()){
                temp.push_back(mat[i][i+k]);
                
        }
        }
            sort(temp.begin(),temp.end());
            if(temp.size()!=0)ans.push_back(temp);
        }
      for(int k=0;k<l;k++){
          vector<int> temp;
        for(int i=0;i<l;i++){
            if(i+k<mat.size() && i<mat[0].size()){
                  temp.push_back(mat[i+k][i]);
        }
        }
           sort(temp.begin(),temp.end());
           if(temp.size()!=0) ans.push_back(temp);
        }       
        
        vector<int> temp1;
        for(auto x:ans){
            for(auto y:x){
               temp1.push_back(y);
            }
        }
        int p=0;
        
        for(int k=0;k<l;k++){
            
        for(int i=0;i<l;i++){
            if(i!=i+k && i<mat.size() && i+k<mat[0].size()){
                mat[i][i+k]=temp1[p];
                p++;
        }
        }
        }
      for(int k=0;k<l;k++){
        for(int i=0;i<l;i++){
            if(i+k<mat.size() && i<mat[0].size()){
                  mat[i+k][i]=temp1[p];
                p++;
        }
        }
        }       
        
        return mat;
        
    }
};
