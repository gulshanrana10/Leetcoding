class Solution {
public:
    vector<vector<int>> ans;
    void process(int n,int k,int indx,vector<int> temp){
        
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        for(int i=indx;i<n+1;i++){
            temp.push_back(i);
            process(n,k,i+1,temp);            
            temp.pop_back();         
        }
        }
    
    vector<vector<int>> combine(int n, int k) {     
        vector<int> temp;        
        process(n,k,1,temp);
        return ans;
    }
};
