//Make a 3D Vector
typedef vector<int> v1d;
typedef vector<v1d> v2d;
typedef vector<v2d> v3d;

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int l = strs.size();
        v3d dp(l+1, v2d(m+1, v1d(n+1, 0))); //dp[l+1][m+1][n+1]
        
        for(int i=1;i<=l;i++)
        {
            string s = strs[i-1];
            int ones = count(s.begin(), s.end(), '1');
            int zeros = s.size()-ones;
            
            for (int j=0;j<=m;j++)
            {
                for (int k=0;k<=n;k++)
                {
                    if (j>=zeros && k>=ones)
                        dp[i][j][k] = max(dp[i-1][j][k], 1 + dp[i-1][j-zeros][k-ones] );
                    else
                        dp[i][j][k] = dp[i-1][j][k];
                    
                }//k
            }//j
        }//i
        
        return dp[l][m][n];
    }
};