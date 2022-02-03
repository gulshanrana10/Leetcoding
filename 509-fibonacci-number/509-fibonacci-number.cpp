class Solution {
public:

    int fib(int n) {
        vector<int> check={0,1};
        for(int i=2;i<31;i++)check.push_back(check[i-1]+check[i-2]);
        return check[n];
    }
};