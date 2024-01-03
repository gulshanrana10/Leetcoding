class Solution {
public:
int check(string s){
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')ans++;
    }
    return ans;
}
    int numberOfBeams(vector<string>& bank) {
        int row=bank.size();
        int ans=0,old=0;
        for(int i=0;i<bank.size();i++){
            int neww=check(bank[i]);
            
            if(neww>0){
                ans+=old*neww;                
                old=neww;
            }
        }
        return ans;
    }
};