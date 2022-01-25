class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int flag=0,best=0;
        if(arr.size()<3)return false;
        for(int i=0;i<arr.size();i++){
            if(arr[best]<arr[i])best=i;
                        
        }
        if(best==0 || best==arr.size()-1)return false;
        for(int i=1;i<best+1;i++){
            if(arr[i]<=arr[i-1])return false;
        }
        for(int i=best;i<arr.size()-1;i++){
            if(arr[i]<=arr[i+1])return false;
        }
        return true;
    }
};