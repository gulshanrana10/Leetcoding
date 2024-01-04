class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        if(n<2)return ans;
        int i=2;
        while(i!=n+1){
            for(int j=1;j<i;j++){
                int flg=0;
                for(int k=2;k<i+1;k++){
                    if(j%k==0 && i%k==0)flg=1;
                }
                if(flg==1)continue;
                    string s=to_string(j)+"/"+to_string(i);
                    ans.push_back(s);
                
            }
            i++;
        }
        return ans;
    }
};