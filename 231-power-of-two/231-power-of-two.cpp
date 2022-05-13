class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        n=abs(n);
        
        if(n==1)return true;
        
        if(n%2==0)return isPowerOfTwo(n/2);
        return false;
            
        
    
    }
};