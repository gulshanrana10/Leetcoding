class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n<=0)return false;
        long long int a=abs(n);
        if(log2(n)==(int)log2(n))return true;
        return false;
        
    }
};