class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>> ans;
        vector<pair<int,int>> p;
        for(int i=0;i<score.size();i++){
            p.push_back({score[i][k],i});
        }
        sort(p.rbegin(),p.rend());
        for(auto c:p)
        ans.push_back(score[c.second]);

        return ans;
    }
};