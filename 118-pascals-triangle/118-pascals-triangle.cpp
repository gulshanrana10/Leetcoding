class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> temp1;
        vector<vector<int>> ans;
        temp1.push_back(1);
        ans.push_back(temp1);
        
        int n=1;
        while(n!=numRows){
            vector<int> temp;
            temp.push_back(1);
            for(int i=0;i<ans[n-1].size()-1;i++){
                temp.push_back(ans[n-1][i]+ans[n-1][i+1]);
            }
            temp.push_back(1);
            ans.push_back(temp);
            n++;
            
        }
        return ans;
    }
};