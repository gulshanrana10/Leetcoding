class Solution {
public:
    
    
    
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
     int ans= accumulate(cost.begin(),cost.end(),0);
        int k=1;
        for(int i=cost.size()-1;i>-1;i--){
            if(k%3==0)ans-=cost[i];
            k++;
        }
        return ans;
    }
};