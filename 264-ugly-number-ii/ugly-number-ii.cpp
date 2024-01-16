class Solution {
public:
    int nthUglyNumber(int n) {
         if(n <= 0) return false; // get rid of corner cases 
        if(n == 1) return true; // base case
        vector<int> tmp(n);
        tmp[0]=1;
        int t2=0,t3=0,t5=0;
        for(int i=1;i<n;i++){
            tmp[i]=min(tmp[t2]*2,min(tmp[t3]*3,tmp[t5]*5));
            if(tmp[i]==tmp[t2]*2)t2++;
            if(tmp[i]==tmp[t3]*3)t3++;
            if(tmp[i]==tmp[t5]*5)t5++;
        }
        for(auto c:tmp)cout<<c<<" ";
        return tmp[n-1];
    }
};