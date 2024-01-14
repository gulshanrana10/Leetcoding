class Solution {
public:

    string repeatLimitedString(string s, int repeatLimit) {
        sort(s.rbegin(),s.rend());
        string tmp="",ans="";        
        int cnt=0;
        int k=0;
        for(int i=0;i<s.size();i++){
            int l=ans.size()-1;
            if( ans.size()>0 && s[i]==ans[l])cnt++;
            else cnt=1;
            
            if(cnt>repeatLimit){
               tmp+=s[i];               
            }
            
            else {
                ans+=s[i];
            }
            while(k<tmp.size() && cnt<=repeatLimit)
            {    char p=tmp[k];
                ans+=p;
                k++;
                if(tmp[k]==ans[ans.size()-1])cnt++; 
                else cnt=1;
                
            }
            

        }
        return ans;
    }
};
/*
zzcccca
0 0
1 1
2 2
3 1
4 2
5 3
6 4*/