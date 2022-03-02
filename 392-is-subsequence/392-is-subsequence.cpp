class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;    
        int flag=0;      
        for(int j=0;j<t.size();j++){
            if(t[j]==s[i]){
                flag++;
                i++;
                
                
            }
        }

        
        cout<<flag;
        if(i==s.size() && flag==i) return true;
        return false;
}
};



