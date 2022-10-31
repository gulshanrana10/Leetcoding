class Solution {
public:
    int ans=0;
    void process(vector<int> &arr,int n,int i){
        
        if(i>=n){
            
            ans++;
            return;
        }
        for(int j=i;j<n;j++){
            if((arr[j]%(i+1)==0 || (i+1)%arr[j]==0)){
                swap(arr[i],arr[j]);
                process(arr,n,i+1);
                swap(arr[i],arr[j]);
            }
        }
    }
    int countArrangement(int n) {
        
        
        vector<int> arr;
        for(int i=1;i<n+1;i++){
            arr.push_back(i);
        }
        process(arr,n,0);
        return ans;
    }
};