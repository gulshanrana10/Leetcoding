class Solution {
public:
    int alternateDigitSum(int n) {
        string s= to_string(n);
        int ans=0,f=0;
        for(int i=0;i<s.size();i++){
            string ss="";
            ss+=s[i];
            int a=stoi(ss);
            if(f==0) ans+=a;
            else ans-=a;
            f=1-f;              

        }
        return ans;
    }
};