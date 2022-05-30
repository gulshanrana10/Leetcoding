class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int,int>> p;
        for(int i=0;i<boxTypes.size();i++){
            p.push_back({boxTypes[i][1],boxTypes[i][0]});
        }
        sort(p.begin(),p.end());
        int ans=0;
         for(int i=boxTypes.size()-1;i>-1;i--){
             if(truckSize<0)return ans;
             int n=min(truckSize,p[i].second);
             ans+=n*p[i].first;
             truckSize-=n;
         
         }
        return ans;
    }
};