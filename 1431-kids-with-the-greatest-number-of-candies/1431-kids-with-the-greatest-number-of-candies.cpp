class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        for(int i=0;i<candies.size();i++){
            int temp=candies[i];
            candies[i]+=extraCandies;
            ans.push_back(candies[i]>= *max_element(candies.begin(),candies.end()));
            candies[i]=temp;
        }
        return ans;
    }
};