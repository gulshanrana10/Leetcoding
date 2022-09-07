class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        vector<int> adjl(n,arr[0]);
    vector<int> adjr(n,arr[n-1]);
    long ans=0;
    for(int i=1;i<n;i++){
        adjl[i]=max(arr[i],adjl[i-1]);
    }
   
    for(int i=n-2;i>=0;i--){
        adjr[i]=max(arr[i],adjr[i+1]);
    }
    for(int i=0;i<n;i++){
        ans+=min(adjl[i],adjr[i])-arr[i];
    }
    return ans;
    }
};