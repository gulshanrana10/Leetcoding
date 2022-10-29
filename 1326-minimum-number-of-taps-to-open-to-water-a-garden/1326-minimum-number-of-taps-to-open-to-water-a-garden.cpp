class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        int min=0,max=0,open=0;
        while(max<n){
            for(int i=0;i<=n;i++){
                if(i-ranges[i]<=min && ranges[i]+i>max){
                    max=i+ranges[i];
                }
            }
            if(max==min)return -1;
            min=max;
            open++;
        }
return open;
    }
};

