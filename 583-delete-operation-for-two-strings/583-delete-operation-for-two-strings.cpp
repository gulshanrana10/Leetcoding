class Solution {
public:
    
   
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        vector<vector<int>> arr(m+1,vector<int>(n+1,0));
        for(int i=m-1;i>-1;i--){
        for(int j=n-1;j>-1;j--){
 
            if(word1[i]==word2[j]){
                arr[i][j]=1+arr[i+1][j+1];
            }
            else{
                arr[i][j]=max(arr[i][j+1],arr[i+1][j]);
            }
        }  
        }
        
        
        return m+n-2*arr[0][0];
    }
};