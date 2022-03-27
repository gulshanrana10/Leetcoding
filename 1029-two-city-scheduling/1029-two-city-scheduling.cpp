class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
    int n=costs.size();
        int mincost=0;
        vector<int> vec;
        for(int i=0;i<n;i++){
            mincost+=costs[i][0];
            vec.push_back(costs[i][1]-costs[i][0]);
        }
       
        sort(vec.begin(),vec.end());
        for(auto x:vec)cout<<x<<" ";
        for(int i=0;i<n/2;i++){
            mincost+=vec[i];
        }
         return mincost;
    }
};