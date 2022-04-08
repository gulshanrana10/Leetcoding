class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int l=temperatures.size();
        vector<int> ans(l,0);
        vector<vector<int>> temp;
        temp.push_back({temperatures[0],0});
        
       for(int i=1;i<l;i++){
            int check=temperatures[i];
            while(temp.size()>0 && check>temp.back()[0]){
                 
                ans[temp.back()[1]]= (i-temp.back()[1]);
                    temp.pop_back();
               
            }
            temp.push_back({temperatures[i],i});
        }
        return ans;
        
        
    } 
};