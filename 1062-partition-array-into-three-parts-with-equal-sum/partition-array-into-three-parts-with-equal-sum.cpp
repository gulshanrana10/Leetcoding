class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int p= accumulate(arr.begin(),arr.end(),0);
        int w=p/3;     
        
        if(p%3!=0)  return false;
        int t=0;
        int flag=0;
        for(int i=0;i<arr.size();i++){
          
            t+=arr[i];
            if(t==w){
            
                flag++;
                t=0;
            }
        }
    
        //if(t==w)flag++;
        if(flag>=3)return true;
        return false;
    }
};