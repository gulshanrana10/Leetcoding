class Solution {
public:
    int findComplement(int num) {
        int l=log10(num)/log10(2);
    cout<<l;
            long long int p=pow(2,l+1)-1;
        return p-num;
    }
};