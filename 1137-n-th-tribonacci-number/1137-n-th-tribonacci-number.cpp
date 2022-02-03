class Solution {
public:
    int tribonacci(int n) {
        vector<int> vec={0,1,1};
        for(int i=3;i<=37;i++)vec.push_back(vec[i-1]+vec[i-2]+vec[i-3]);
        return vec[n];
    }
};