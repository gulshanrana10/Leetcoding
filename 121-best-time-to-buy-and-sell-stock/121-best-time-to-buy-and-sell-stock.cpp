class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        vector<int> m;
        int best=prices[prices.size()-1];

        for(int i=prices.size()-1;i>=0;i--){
            int temp=prices[i];
           profit=max(profit,best-prices[i]);
            best=max(best,temp);
          
        }
        
        return profit;
    }
};