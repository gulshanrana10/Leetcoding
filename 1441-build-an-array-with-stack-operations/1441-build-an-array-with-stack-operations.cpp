class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int i=0,k=0;
       while( k!=target.size()){
           i++;
           if(target[k]==i){
               ans.push_back("Push");
               k++;
           }
           else {
               ans.push_back("Push");
               ans.push_back("Pop");
           
           }
        
       }
        return ans;
    }
};