class Solution {
public:
    int vec[50];
    int climbStairs(int n) {
        if(vec[n])return vec[n];
        if(n<=1)return 1;
        if(n==2)return 2;
        vec[n]=climbStairs(n-1)+climbStairs(n-2);
        return vec[n];
    }
};