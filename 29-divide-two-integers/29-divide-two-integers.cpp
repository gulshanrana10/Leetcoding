class Solution {
public:
    int divide(int dividend, int divisor) {
       /* int ans=0;
        int flag=1;
        if(dividend<0 && !divisor<0) int flag=-1;
        if(!dividend<0 && divisor<0) int flag=-1;
        
        dividend=abs(dividend);
        divisor=abs(divisor);
 
        while(dividend>0){
            if(dividend<divisor){
                break;
            }
            dividend-=divisor;
            ans++;
        }
        return ans*flag;*/
        
         if(divisor == 1)
        return dividend;
    if(dividend == INT_MIN && abs(divisor) == 1)
        return INT_MAX;
   
    int sign = (dividend > 0 ^ divisor > 0) ? -1 : 1;

    long ans = 0;
    long end = abs((long)dividend);
    long sor = abs((long)divisor);

    while(end >= sor) {
        long temp  = sor;
        long power = 1;
        while((temp << 1) < end) {
            power <<= 1;
            temp  <<= 1;
        }
        ans += power;
        end -= temp;
    }
    return sign * ans;
    }
};