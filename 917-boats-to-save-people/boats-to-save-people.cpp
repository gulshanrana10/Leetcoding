class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size()-1;
        int ans=0;
        sort(people.begin(),people.end());
        int k=0;
        while(n>k){
            if(people[n]+people[k]<=limit)k++;
            n--;
            ans++;
        }
        if(n==k)ans++;
        return ans;
    }
};

