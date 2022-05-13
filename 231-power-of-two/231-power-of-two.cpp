class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int a=abs(n);
        if(n<=0)return false;
        while(a>1){
            if(n==2)return true;
            if(a%2==0){
                a=a/2;
            }
            else return false;
            
        }
        
        return true;
    }
};