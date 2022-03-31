class Solution {
public:
    string addBinary(string a, string b) {
        
        int carry=0;
        int m=a.size()-1;
        int n=b.size()-1;
        string ans="";
        int i=max(m,n);
        int k=0;
        while(k!=i+1){
            int ad=0;
            
            if(m-k>=0)if(a[m-k]=='1')    ad++;
            if(n-k>=0)if(b[n-k]=='1')    ad++;
            if(carry==1)             ad++;      
            
            
            ans+= to_string(ad%2);
            if(ad>1)carry=1;
            else carry=0;
            k++;
        }
        
        if(carry==1){ans+='1';}
    reverse(ans.begin(),ans.end());
        return ans;
    }
};