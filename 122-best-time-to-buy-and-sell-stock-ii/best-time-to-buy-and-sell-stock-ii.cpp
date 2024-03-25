class Solution {
public:
    /*int ans=0;
    void process(int hold,int i,int profit,vector<int> prices){
        
        if(i==prices.size())
        {
            ans=max(ans,profit);
            return;
        }
        if(hold !=-1 && hold<prices[i]){
            process(hold,i+1,profit,prices);
            process(-1,i+1,profit+prices[i]-hold,prices);
        }
        else
        process(prices[i],i+1,profit,prices);
        //process(-1,i+1,profit,prices);
        
    }*/
    int maxProfit(vector<int>& prices) {
        
         int profit = 0;
        for(int i=1;i<prices.size();i++) {
            if(prices[i] > prices[i-1]) {
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};