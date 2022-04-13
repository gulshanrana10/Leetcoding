class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>> ans(n,vector<int>(n,0));
        int a=1;
        int k=0;
        while(a<=n*n){
           
        for(int i=k;i<n-k && a<=n*n;i++){
            ans[0+k][i]=a;
            a++;
        }
        for(int i=1+k;i<n-k && a<=n*n;i++){
            ans[i][n-1-k]=a;
            a++;
        }
        for(int i=n-2-k;i>=k && a<=n*n;i--){
            ans[n-1-k][i]=a;
            a++;
        }
        for(int i=n-2-k;i>=1+k && a<=n*n;i--){
            ans[i][0+k]=a;
            a++;
        }
            k++;
        }
        return ans;
    }
};