class Solution {
public:
    int arrangeCoins(int n) {
       
        int i=0;
        
        while(n>0){              
             i++;           
          n=n-i;
              
        }
        if(n<0)return i-1;
        return i;
    }
};